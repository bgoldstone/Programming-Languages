#include <iostream>
#include <string>
#include <vector>
#include "HugeInteger.h"
using namespace std;
/**
 * @brief A code that uses the HugeInteger Object.
 *
 * Name: Benjamin Goldstone
 * Date: 02/17/2023
 * Sources Used:
 *      https://www.geeksforgeeks.org/vector-in-cpp-stl/,
 *      https://stackoverflow.com/questions/12399522/c-checking-whether-a-string-character-is-a-digit-using-isdigit
 */
int main()
{
    HugeInteger h1;
    string num = "123abc123";
    HugeInteger h2(num);
    HugeInteger h3(h2);
    cout << h1.toString() << endl;
    cout << h2.toString() << endl;
    cout << h3.toString() << endl;
    return 0;
}