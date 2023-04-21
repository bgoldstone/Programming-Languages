/**
 * @file Main.cpp
 * @author Ben Goldstone (bgoldstone@muhlenberg.edu)
 * @brief A program that uses a Random  Sentence Generator object to generate random sentences based on a given set of grammar.
 * @version 0.1
 * @date 2023-04-23
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "RandomSentenceGenerator.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string fileName;
    cout << "Enter a file name: ";
    getline(cin, fileName);
    cout << endl;
    RandomSentenceGenerator *generator = new RandomSentenceGenerator(fileName);
    cout << generator->randomSentence() << endl;
    generator->printGrammar();
    delete generator;
    return 0;
}
