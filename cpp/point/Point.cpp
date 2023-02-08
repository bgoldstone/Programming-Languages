#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;
/** @brief Point Constructor
 @param x x point
 @param y y point */
Point::Point(int x, int y) : x(x), y(y) {}
/// @brief Point Constructor no arguments
Point::Point() {}
int Point::getX() const { return x; }
int Point::getY() const { return y; }
void Point::setX(int x) { this->x = x; }
void Point::setY(int y) { this->y = y; }
/**
 * @brief Gets distance between this point and another point passed through
 *
 * @param a Point that you want to find the distance to.
 * @return double distance between this point and another point.
 */
double Point::distance(Point a)
{

    return sqrt(pow((a.getX() - getX()), 2) + pow((a.getY() - getY()), 2));
}

/**
 * @brief Prints an array of points.
 *
 * @param a array of points to print.
 */
void Point::printArrayOfPoints(Point *a)
{
    cout << "Array of Points: [";
    for (int i = 0; i < sizeof(a) - 1; i++)
    {
        // if not last point...
        if (sizeof(a) - 2 != i)
        {

            printf("(%d, %d), ", a[i].getX(), a[i].getY());
        }
        else
        {
            printf("(%d, %d)]\n", a[i].getX(), a[i].getY());
        }
    }
}