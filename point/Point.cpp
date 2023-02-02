#include "Point.h"
Point::Point(int x, int y) : x(x), y(y) {}

int Point::getX() const { return x; }
int Point::getY() const { return y; }
void Point::setX(int x) { this->x = x; }
void Point::setY(int y) { this->y = y; }
int Point::dis(Point a)
{
    int x = a.getX() + getX();
    int y = a.getY() + getY();
}
