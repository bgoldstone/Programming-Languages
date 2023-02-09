#include "..\point\Point.h"
#include <iostream>
using namespace std;

int main()
{
    Point p(3, 4);
    Point p2(4, 5);
    printf("%f", p.distance(p2));
}