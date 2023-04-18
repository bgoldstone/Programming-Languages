#include "RandomSentenceGenerator.h"
#include <iostream>
#include <fstream>
#include <sstream>
RandomSentenceGenerator::RandomSentenceGenerator(std::string file)
{
    std::ifstream fileStream;
    std::stringstream contents;
    std::string line;
    fileStream.open(file);
    if (fileStream.is_open())
    {
        while (getline(fileStream, line))
        {
            contents << line << std::endl;
        }
        fileStream.close();
    }
    std::cout << contents.str().c_str() << std::endl;
}
RandomSentenceGenerator::~RandomSentenceGenerator() {}
std::string RandomSentenceGenerator::randomSentence() {}
void RandomSentenceGenerator::printGrammar() {}