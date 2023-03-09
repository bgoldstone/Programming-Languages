#include <iostream>
#include <vector>
#include <fstream>
#include <random>
using namespace std;

int play(vector<string> *words)
{
    int randIndex = rand() % words->size();
    string currentWord = words->at(randIndex);
    int score = 0;
+
    return 0;
}

int main()
{
    vector<string> *words;
    words = new vector<string>();
    string fileName = "words.txt";
    string line;

    // read in file
    ifstream myFile(fileName);
    if (myFile.is_open())
    {
        // for each line in the file that is not null.
        while (getline(myFile, line))
        {
            words->push_back(line);
        }
        myFile.close();
    }
    int option = -1;
    int score = 0;
    printf("Welcome to Hangman!!\n\n");
    while (option != 4)
    {
        printf("Please select option:\n\t1. Play\n\t2. Score\n\t3. Add Word\n\t4. Exit\n\n");
        cin >> option;
        switch (option)
        {
        case 1:
            score += play(words);
            break;

        default:
            printf("Invalid option!\n");
            break;
        };
    }

    return 0;
}
