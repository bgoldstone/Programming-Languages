#include "..\point\Point.h"
#include <cstdio>
#include <iostream>
Point *create1(int x, int y);
Point *create2(int x, int y);

// Class example 2/7/23

int main()
{
	Point *p1 = create1(3, 4);
	Point *p2 = create2(4, 5);
	std::cout << p1->getX();
	std::cout << p2;
	std::cout << "\n\n";
	std::cout << p2->getX();
	std::cout << "\n\n";
	// only delete objects that are in the heap.
	delete p2; // frees the memory allocated for p2
}

Point *create1(int x, int y)
{
	Point pOne(x, y);
	std::cout << pOne.getX();
	std::cout << "\n\n";
	std::cout << &pOne;
	std::cout << "\n\n";
	return &pOne;
}

Point *create2(int x, int y)
{
	Point *pTwo;
	pTwo = new Point(x, y);
	std::cout << pTwo;
	std::cout << "\n\n";
	std::cout << pTwo->getX();
	std::cout << "\n\n";
	return pTwo;
}