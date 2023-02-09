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
    const int arrSize = 3;
    Point *pointArray = new Point[arrSize];
    pointArray[0] = Point(0, 0);
    pointArray[1] = Point(2, 7);
    pointArray[2] = Point(10, 36);
    int newX = 5;
    int *newXPointer = new int(6);

    // Modifing Points
    pointArray[0].setX(newX);
    pointArray[1].setXPointer(newXPointer);
    for (int i = 0; i < arrSize; i++)
    {
        printf("Point %d: %s\n", i, pointArray[i].str().c_str());
    }
    cout << "================================\nFor Loop:\n";

    // Creating Point Array.
    Point origin = Point(0, 0);
    string pointOrigin = origin.str();
    // Running loop over the points array
    for (int i = 0; i < sizeof(pointArray) - 1; i++)
    {
        // When using printf statements, strings must be printed using stringVar.c_str() or stringVar.data()
        printf("Distance from %s to %s is %.2f\n", pointArray[i].str().c_str(), pointOrigin.c_str(), pointArray[i].distance(origin));
    }
    delete[] pointArray;
    return 0;
}