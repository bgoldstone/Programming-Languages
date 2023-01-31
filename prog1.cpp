#include <iostream>
using namespace std;

int main()
{
    int x = 16;
    int y = 77;
    int *pointy;
    printf("pointy's address is %p\n", pointy);
    printf("x is %d y is %d\n", x, y);
    pointy = &x;
    printf("pointy's address is %p\n", pointy);
    printf("pointy's value is %d\n", *pointy);
    pointy = &y;
    y = 88;
    printf("x is %d y is %d\n", x, y);
    printf("pointy's address is %p\n", pointy);
    printf("pointy's value is %d\n", *pointy);

    return 0;
}