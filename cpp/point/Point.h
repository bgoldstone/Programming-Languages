#pragma once // prevents duplicate imports
/* #ifndef Point
   #define Point
   #endif
*/
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
    double distance(Point a);
    static void arrayOfPointers(Point *a);
};