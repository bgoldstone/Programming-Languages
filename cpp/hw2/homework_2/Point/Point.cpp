// Rebecca and Ben Homework 2 Due Date: 2/9/23
#include "Point.h"
#include <iostream> 
#include <tgmath.h>
using namespace std;

Point::Point():x(0), y(0){} //default constructor 
Point::Point(int xVal, int yVal):x(xVal), y(yVal){}

//getters and setters
int Point::getX() const{
    return x;
}

int Point::getY() const{
    return y;
}

void Point::setX(int xNew){
    x = xNew;
}

void Point::setY(int yNew){
    y = yNew;
}


/**
 * The function takes two points as parameters and calculates the distance between them
 * 
 * @param a Point a is the first point that the user inputs.
 * @param b Point b is the second point that the user inputs.
 */
void Point::dis(Point a, Point b){
    cout << "Distance between Point A and Point B:" << sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2)*1.0) << endl;
}


/**
 * The function takes a Point object as an argument and modifies the object's x and y values
 * 
 * @param p A copy of the object that is being modified.
 */
void Point::modify(Point p){
    cout << "Point modifier for stack\n";
    printf("%s %d \n%s %d\n", "Current X Value: ", p.getX(), "Current Y Value: ", p.getY());
    int x,y;
    cout << "Enter new value for X: ";
    cin >> x;
    cout << "\nEnter new value for Y: ";
    cin >> y;
    p.setX(x);
    p.setY(y);
    printf("%s %d \n%s %d\n", "New X Value: ", p.getX(), "New Y Value: ", p.getY());
}

/**
 * This function takes a pointer to a Point object and modifies the values of the object
 * 
 * @param p pointer to the object to be modified
 */
void Point::modify(Point * p){
    cout << "Point modifier for heap\n";
    printf("%s %d \n%s %d\n", "Current X Value: ", p->getX(), "Current Y Value: ", p->getY());
    int x,y;
    cout << "Enter new value for X: ";
    cin >> x;
    cout << "\nEnter new value for Y: ";
    cin >> y;
    p->setX(x);
    p->setY(y);
    printf("%s %d \n%s %d\n", "New X Value: ", p->getX(), "New Y Value: ", p->getY());
}

/**
 * The function takes in a pointer to a Point object and an integer size. It prints out the x and y
 * coordinates of each Point object in the array
 * 
 * @param p This is the array of Point objects.
 * @param size The size of the array
 */
void printArray(Point * p, int size){
    cout << "Array Printing...\n";
    for(int i=0; i<size; i++){
        printf("%s %d %s %d %s\n", "(", p[i].getX(), ",", p[i].getY(), ")\n");
    }
}

/**
 * The function arrayMaker() creates an array of Point objects, and then prints the array
 */
void Point::arrayMaker(){
    cout << "Array Maker\n";
    cout << "Enter size of array: ";
    int size;
    cin >> size; 
    Point arr[size];
    for(int i=0; i<size; i++){
        arr[i].setX(i);
        arr[i].setY(i);
    }
    printArray(arr, size);
}

// bool Point::operator== (const Point & other) const{
//     return(this->getX() == other.getX() && this->getY() == other.getY());
// }

// const Point Point::operator+ (const Point & other) const{
//     Point result;
//     result.setX(x+other.getX());
//     result.setY(y+other.getY());
//     return result;
// }

