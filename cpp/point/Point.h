#pragma once // prevents duplicate imports
/* #ifndef Point
   #define Point
   #endif
*/
#include <string>
using namespace std;
class Point
{
private:
    int x, y;

public:
    Point(int x, int y);
    Point();
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    void setXPointer(int *x);
    void setYPointer(int *y);
    double distance(Point a);
    string str();
    bool operator==(const Point &) const;
    Point operator+(const Point &) const;
    static void printArrayOfPoints(Point *a);
};