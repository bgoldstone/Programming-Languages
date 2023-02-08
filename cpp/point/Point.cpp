#include "Point.h"
#include <cmath>
#include <iostream>
#include <sstream>
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

    return sqrt(pow((a.getX() - x), 2) + pow((a.getY() - y), 2));
}
/**
 * @brief Sets new x value using pointers.
 *
 * @param x x value to set.
 */
void Point::setXPointer(int *x)
{
    this->x = *x;
}

/**
 * @brief Sets new y value using pointers.
 *
 * @param y y value to set.
 */
void Point::setYPointer(int *y)
{
    this->y = *y;
}

/**
 * @brief Gets a string representation of a Point.
 *
 * @return string String representation of a Point.
 */
string Point::str()
{
    stringstream returnVal;
    returnVal << "(" << x << ", " << y << ")";
    return returnVal.str();
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
            cout << a[i].str() << ", ";
        }
        else
        {
            cout << a[i].str() << "]\n";
        }
    }
}