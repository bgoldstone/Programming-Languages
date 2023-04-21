#include "Grammar.h"
#include <map>
#pragma once
class RandomSentenceGenerator
{
private:
    Grammar *grammar;

public:
    RandomSentenceGenerator(std::string file);
    ~RandomSentenceGenerator();
    std::string randomSentence();
    void printGrammar();
};