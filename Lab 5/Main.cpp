#include <string>
#include <iostream>
#include "RandomSentenceGenerator.h"
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string fileName = "Grammars\\Army.g";
    //cout << "Enter a file name: ";
    //getline(cin, fileName);
    //cout << endl;
    RandomSentenceGenerator *generator = new RandomSentenceGenerator(fileName);
    cout << generator->randomSentence() << endl;
    generator->printGrammar();
    return 0;
}
