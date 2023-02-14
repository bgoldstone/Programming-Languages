// Rebecca and Ben Homework 2 Due Date: 2/9/23

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <regex>
using namespace std;

/**
 * For each letter in the alphabet, if the letter is in the map, print the letter, the number of times
 * it appears, and the percentage of the total text it represents
 *
 * @param freq the map that contains the frequency of each letter
 * @param count the number of characters in the file
 */
void mapPrint(map<char, int> freq, int count)
{

    for (char key : "ABCDEFGHIJKLMNOPQRSTUVWXYZ")
    {
        if (freq[key] != 0)
        {
            double percentage = (double)freq[key] / count * 100;

            printf("%c:%d %.2f%%\n", key, freq[key], percentage);
        }
    }
}

/**
 * It reads a file, counts the number of lines, the number of letters, and the frequency of each letter
 *
 * @param fileName The name of the file to be read.
 */
void fileReader(string fileName)
{
    string line;
    string file;
    ifstream myFile(fileName);
    int numOfLine = 0;
    int numOfLetters = 0;
    map<char, int> freq;

    if (myFile.is_open())
    {
        while (getline(myFile, line))
        {
            file += line;
            numOfLine++;
            numOfLetters += (int)line.length();
        }
        myFile.close();
    }
    for (char c : file)
    {
        c = (char)toupper(c);
        freq[c]++;
    }

    cout << "Number of Lines: " << numOfLine << endl;
    cout << "Number of Letters: " << numOfLetters << endl;
    cout << "Total number of letters: " << numOfLetters << endl;
    mapPrint(freq, numOfLetters);
}

/**
 * It takes a file name as input, and then reads the file and prints the contents to the screen
 * 
 * @return 0.
 */
int main()
{
    string fileName = "";
    cout << "Enter file name: ";
    cin >> fileName;
    fileName += ".txt";
    fileReader(fileName);
    return 0;
}
