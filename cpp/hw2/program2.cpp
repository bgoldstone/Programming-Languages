/** Program 2 HW 2
 * --------------------------------
 * Author: Ben Goldstone, Rebecca Zipper
 * Date: February 10, 2023
 */
#include "../point/Point.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Point *a = new Point(0, 0);
    Point *b = new Point(2, 7);
    Point *c = new Point(10, 36);
    int newX = 5;
    int *newXPointer = new int(6);

    // Modifing Points
    a->setX(newX);
    b->setXPointer(newXPointer);
    cout << "Point a: " << a->str() << endl;
    cout << "Point b: " << a->str() << endl;
    cout << "Point c: " << c->str() << endl;
    cout << "================================\nFor Loop:\n\n";

    // Creating Point Array.
    Point *pointArray = new Point[3]{*a, *b, *c};
    Point origin = Point(0, 0);
    string pointOrigin = origin.str();
    // Running loop over the points array
    for (int i = 0; i < sizeof(pointArray) - 1; i++)
    {
        // When using printf statements, strings must be printed using stringVar.c_str() or stringVar.data()
        printf("Distance from %s to %s is %.2f\n", pointArray[i].str().c_str(), pointOrigin.c_str(), pointArray[i].distance(origin));
    }

    delete a;
    delete b;
    delete c;
    delete[] pointArray;
    return 0;
}