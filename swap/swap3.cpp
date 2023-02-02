#include <iostream>
using namespace std;

void swappy(int *one, int *two);

int main()
{
    int x = 1, y = 2;
    printf("Before swappy x: %d, y: %d\n\n", x, y);
    swappy(&x, &y);
    printf("After swappy x: %d, y: %d\n", x, y);
    return 0;
}

void swappy(int *one, int *two)
{
    printf("In swappy before x: %d, y: %d\n", *one, *two);
    int tmp = *one;
    *one = *two;
    *two = tmp;
    printf("In swappy after x: %d, y: %d\n\n", *one, *two);
}