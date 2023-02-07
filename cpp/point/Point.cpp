#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;

Point::Point(int x, int y) : x(x), y(y) {}
Point::Point() {}
int Point::getX() const { return x; }
int Point::getY() const { return y; }
void Point::setX(int x) { this->x = x; }
void Point::setY(int y) { this->y = y; }
double Point::distance(Point a)
{

    return sqrt(pow((a.getX() - getX()), 2) + pow((a.getY() - getY()), 2));
}

void Point::arrayOfPointers(Point *a)
{
    for (int i = 0; i < sizeof(a) - 1; i++)
    {
        printf("%d %d\n", a[i].getX(), a[i].getY());
    }
}