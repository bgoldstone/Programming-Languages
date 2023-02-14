// Rebecca and Ben Homework 2 Due Date: 2/9/23
#pragma once //makes sure you cannot import this code twice.

class Point{
    private:
        int x,y;

    public: 
        Point();
        Point(int xVal, int yVal);
        int getX() const; // you shall not change the attributes by using const. Read only
        int getY() const;
        void setX(int xNew);
        void setY(int yNew);
        void dis(Point a, Point b);
        void modify(Point p);
        void modify(Point * p);
        void arrayMaker();
        // bool operator== (const Point &) const;
        // const Point operator+ (const Point &) const;
};
