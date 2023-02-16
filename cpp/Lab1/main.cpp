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
    HugeInteger h1("512");
    string num = "123abc123";
    HugeInteger h2(num);
    HugeInteger h3(h2);
    HugeInteger h4 = h1 + h2;
    HugeInteger h5;
    HugeInteger h6 = h5;
    bool b1 = h1 > h2;

    printf("h1: %s\n", h1.toString());
    printf("h2: %s\n", h2.toString());
    printf("h3: %s\n", h3.toString());
    printf("h4: %s\n", h4.toString());
    printf("h5: %s\n", h5.toString());
    printf("h6: %s\n", h6.toString());
    const char *b1Str = b1 == 1 ? "True" : "False";
    printf("%s is greater than %s : %s\n", h1.toString(), h2.toString(), b1Str);
    return 0;
}