#include "Point.h"
#include<cstdio>
#include<iostream>

Point* create1(int x, int y);
Point* create2(int x, int y);
int main(){
	Point* p1= create1(3,4);
	Point* p2 = create2(4,5);
	// std::cout << p1->getX();
	std::cout<<p2;
	std::cout<<"\n\n";
	std::cout << p2->getX();
	std::cout<<"\n\n";
}

Point* create1(int x, int y){ //only can access memory inside method
	Point pOne(x,y);
	std::cout << pOne.getX();
	std::cout<<"\n\n";
	std::cout << &pOne;
	std::cout<<"\n\n";
	return &pOne;
}

Point* create2(int x, int y){ 
	Point* pTwo;
	pTwo = new Point(x,y);// have to use new bc heap
	std::cout << pTwo;// have to use new bc heap
	std::cout<<"\n\n";
	std::cout<< pTwo->getX();
	std::cout<<"\n\n";
	return pTwo;
	// delete pTwo; if you don't return it, to free up space. you could also do that in main.
}