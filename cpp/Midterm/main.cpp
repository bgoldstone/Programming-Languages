#include <iostream>
#include <vector>
#include <fstream>
#include <random>
using namespace std;

// Gets new word from user
void getNewWord(vector<string> *words)
{
    // List words
    printf("List of current words: ");
    for (int currWord = 0; currWord < words->size(); currWord++)
    {
        cout << words->at(currWord) << " ";
    }
    printf("\n");

    // Asks user for word
    string wordEntry;
    wordEntry = " ";
    bool inVector;
    // run while word criteria is not valid.
    cin.ignore();
    do
    {
        printf("Please enter a word that is less than 10 characters, contains no spaces, and is not in the current word list.\n");
        getline(cin, wordEntry);

        inVector = false;
        // if word in vector
        for (int element = 0; element < words->size(); element++)
        {
            if (words->at(element) == wordEntry)
            {
                inVector = true;
                break;
            }
        }

    } while (wordEntry.find(' ') != -1 || wordEntry.size() > 10 || inVector);
    words->push_back(wordEntry);
}
int play(vector<string> *words)
{
    int randNum = rand() % words->size();
    string currentWord = words->at(randNum);
    string guessWord(currentWord.size(), '_');
    bool *guesses;
    guesses = new bool[256];
    for (int i = 0; i < 256; i++)
    {
        guesses[i] = false;
    }
    char guessChar = (char)255;
    int chances;
    for (chances = 0; chances < 7; chances++)
    {
        printf("%s\n", guessWord.c_str());
        printf("Enter a character to guess: ");
        cin >> guessChar;
        if (guesses[guessChar] == 1)
        {
            printf("\n%c already guessed\n", guessChar);
        }
        else
        {
            printf("\n");
            for (int i = 0; i < guessWord.size(); i++)
            {
                if (currentWord[i] == guessChar)
                    guessWord[i] = guessChar;
            }
            if (guessWord.find('_') == -1)
                break;
            guesses[guessChar] = true;
        }
    }
    printf("%s\n", guessWord.c_str());
    if (guessWord.find('_') == -1)
    {
        printf("Congratulations! You have successfully guessed the word %s with %d guesses!\n\n", currentWord.c_str(), chances);
        return 1;
    }
    printf("Sorry, but you have not guessed the word %s.\n\n", currentWord.c_str());
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
    int wins = 0;
    int losses = 0;
    printf("Welcome to Hangman!!\n\n");
    while (option != 4)
    {
        printf("Please select option:\n\t1. Play\n\t2. Score\n\t3. Add Word\n\t4. Exit\n\n");
        cin >> option;
        switch (option)
        {
        case 1:
            int result;
            result = play(words);
            if (result == 0)
                losses++;
            else
                wins++;
            break;
        case 2:
            printf("You have won %d times and lost %d times.\n", wins, losses);
            break;

        case 3:
            getNewWord(words);
            break;

        case 4:
            printf("Thanks for playing!\n\n");
            break;
        default:
            printf("Invalid option!\n");
            break;
        }
    }

    return 0;
}
