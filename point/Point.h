#pragma once // prevents duplicate imports
class Point
{
private:
    int x, y;

public:
    Point(int x, int y);
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    int dis(Point a);
};