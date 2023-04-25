/**
 * @file RandomSentenceGenerator.cpp
 * @author Ben Goldstone (bgoldstone@muhlenberg.edu)
 * @brief A program that generates random grammar from a given set of grammar.
 * @version 0.1
 * @date 2023-04-21
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "RandomSentenceGenerator.h"
#include <fstream>
#include <sstream>
#include <algorithm>
/**
 * @brief Constructs a new Random Sentence Generator object
 *
 * @param file File to generate grammar with.
 */
RandomSentenceGenerator::RandomSentenceGenerator(std::string file)
{
    this->grammar = new Grammar();

    // input and string to store line.
    std::ifstream fileStream;
    std::string line;
    fileStream.clear();
    fileStream.open(file.c_str());
    // if file is open.
    if (fileStream.is_open())
    {
        std::string nonTerminal;
        bool startProduction = false;
        bool endProduction = true;

        // for each line in the file
        while (getline(fileStream, line))
        {
            // if start of new production
            if (line.find("{") != std::string::npos)
            {
                startProduction = true;
                endProduction = false;
                getline(fileStream, line);
                nonTerminal = line.c_str();
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
                line = line.c_str();
                // Remove Whitespace
                nonTerminal.erase(std::remove_if(nonTerminal.begin(), nonTerminal.end(), isspace), nonTerminal.end());

                // Removes last and first spaces.
                line = line.substr(0, line.find(";"));
                int first = line.find_first_not_of(' ');
                int last = line.find_last_not_of(' ');
                line = line.substr(first, last - first + 1);
                grammar->addProduction(nonTerminal, line);
            }
        }
        fileStream.close();
    }
}
/**
 * @brief Destructor for a Random Sentence Generator object
 *
 */
RandomSentenceGenerator::~RandomSentenceGenerator()
{
    delete this->grammar;
}
/**
 * @brief Generates a random sentence from the grammar object.
 *
 * @return std::string random sentence.
 */
std::string RandomSentenceGenerator::randomSentence()
{
    std::string sentence = grammar->getRandomRHS("<start>");

    // while there are still non-terminals.
    while (sentence.find("<") != std::string::npos)
    {
        // gets nonterminal element
        std::string nonTerminal = sentence.substr(sentence.find_first_of("<"), (sentence.find_first_of(">") - sentence.find_first_of("<")) + 1);
        // gets new grammar and appends rest of sentence onto it.
        std::string newGrammar = grammar->getRandomRHS(nonTerminal) + sentence.substr(sentence.find_first_of(">") + 1, sentence.size() - sentence.find_first_of(">"));
        sentence.replace(sentence.find_first_of("<"), sentence.size(), newGrammar);
    }

    if (sentence.find(">") != std::string::npos)
    {
        sentence.replace(sentence.find_first_of(">"), 1, "");
    }
    // remvoe semicolons.
    if (sentence.find(";") != std::string::npos)
    {
        sentence.replace(sentence.find_first_of(";"), 1, "");
    }
    return sentence;
}
/**
 * @brief Prints grammar to the stdout stream.
 *
 */
void RandomSentenceGenerator::printGrammar()
{
    std::cout << *this->grammar;
}