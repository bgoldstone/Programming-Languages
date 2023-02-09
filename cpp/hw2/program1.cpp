/** Program 1 HW 2
 * -------------------------------------
 * Author: Ben Goldstone, Rebecca Zipper
 * Date: February 10, 2023
 */

#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "../point/Point.h"
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

    cout << "\nLetter Breakdowns\n\n";
    const string uppercaseLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (char key : uppercaseLetters)
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
    cout << "File Output"
         << "\n\n";
    cout << file << endl;
    mapPrint(freq, numOfLetters);
}
/**
 * @brief Prints an Array of Points
 *
 */
void printPoints()
{
    Point a = Point(0, 0);
    Point b = Point(3, 7);
    Point c = Point(2, 4);
    Point *arrPointers = new Point[3]{a, b, c};
    Point::printArrayOfPoints(arrPointers);
}

int main()
{
    string fileName = "";
    cout << "Enter file name: ";
    cin >> fileName;
    fileName += ".txt";
    fileReader(fileName);
    printPoints();
    return 0;
}
