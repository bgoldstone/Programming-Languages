#include "Point.h"
#include <cmath>
Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX() const { return x; }
int Point::getY() const { return y; }
void Point::setX(int x) { this->x = x; }
void Point::setY(int y) { this->y = y; }
double Point::distance(Point a)
{

    return sqrt(pow((a.getX() - getX()), 2) + pow((a.getY() - getY()), 2));
}
