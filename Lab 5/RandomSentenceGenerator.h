#include "Grammar.h"
#include <map>
#pragma once

class RandomSentenceGenerator
{
private:
    // Holds grammar object.
    Grammar *grammar;

public:
    RandomSentenceGenerator(std::string file);
    ~RandomSentenceGenerator();
    std::string randomSentence();
    void printGrammar();
};