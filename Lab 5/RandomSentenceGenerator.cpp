#include "RandomSentenceGenerator.h"
#include <iostream>
#include <fstream>
#include <sstream>
RandomSentenceGenerator::RandomSentenceGenerator(std::string file)
{
    this->grammar = new Grammar();
    std::ifstream fileStream;
    std::stringstream contents;
    std::string line;
    fileStream.open(file);
    if (fileStream.is_open())
    {
        std::string nonTerminal;
        bool startProduction = false;
        bool endProduction = true;
        while (getline(fileStream, line))
        {
            // if start of new production
            if (line.find("{") != std::string::npos)
            {
                startProduction = true;
                endProduction = false;
                getline(fileStream, line);
                nonTerminal = line;
            }
            // if end of production
            else if (line.find("}") != std::string::npos)
            {
                startProduction = false;
                endProduction = true;
            }
            // if still production
            else if (startProduction && !endProduction)
            {
                grammar->addProduction(nonTerminal, line.substr(0, line.find(" ;")));
            }
        }
        fileStream.close();
    }
}
RandomSentenceGenerator::~RandomSentenceGenerator()
{
    delete this->grammar;
}
std::string RandomSentenceGenerator::randomSentence()
{
    std::string sentence = grammar->getRandomRHS("<start>");
    while (sentence.find("<") != std::string::npos)
    {
        // gets nonterminal element
        std::string nonTerminal = sentence.substr(sentence.find_first_of("<"), (sentence.find_first_of(">") - sentence.find_first_of("<")) + 1);
        // gets new grammar and appends rest of sentence onto it.
        std::string newGrammar = grammar->getRandomRHS(nonTerminal) + sentence.substr(sentence.find_first_of(">") + 1);
        sentence.replace(sentence.find_first_of("<"), newGrammar.size(), newGrammar);
    }
    if (sentence.find(">") != std::string::npos)
    {
        sentence.replace(sentence.find_first_of(">"), 1, "");
    }
    return sentence;
}
void RandomSentenceGenerator::printGrammar()
{
    std::cout << *this->grammar;
}