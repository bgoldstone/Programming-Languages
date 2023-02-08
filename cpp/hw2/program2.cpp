/** Program 2 HW 2
 * --------------------------------
 * Author: Ben Goldstone, Rebecca Zipper
 * Date: February 10, 2023
 */
#include "../point/Point.h"
#include <iostream>
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
    cout << "Point a: " << a->str() << endl;
    b->setXPointer(newXPointer);
    cout << "Point b: " << a->str() << endl;
    cout << "Point c: " << c->str() << endl;
    cout << "================================\nFor Loop:\n\n";

    // Creating Point Array.
    Point *pointArray = new Point[3]{*a, *b, *c};

    // Running loop over the points array
    for (int i = 0; i < sizeof(pointArray) - 1; i++)
    {
        cout << "Point " << i + 1 << ": " << pointArray[i].str() << endl;
    }

    delete a;
    delete b;
    delete c;
    delete[] pointArray;
    return 0;
}