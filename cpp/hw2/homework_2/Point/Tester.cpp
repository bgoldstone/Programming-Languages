// Rebecca and Ben Homework 2 Due Date: 2/9/23
#include "Point.h"
#include <iostream> 
using namespace std;


void menu(){
    cout << "Welcome to the Menu" << endl;
    cout << "1. Make New Point" << endl;
    cout << "2. Modify Point" << endl;
    cout << "3. Put 2 Points on the Heap" << endl;
    cout << "4. Make an Array" << endl;
    cout << "5. Calculate Distance" << endl;
}


int main(){
    menu();

    cout << "Making New Points\n";
    int x,y;
    cout << "\nEnter X: ";
    cin >> x;
    cout << "\nEnter Y: ";
    cin >> y;

    Point p(x,y); // a new point on stack 
    cout << "In Stack";
    printf("%s %d %s %d %s\n", "(", p.getX(), ",", p.getY(), ")");


    cout << "\nEnter X: ";
    cin >> x;
    cout << "\nEnter Y: ";
    cin >> y;
    Point* newp = new Point(x,y); // a new point on heap

    cout << "In Heap\n";
    printf("%s %d %s %d %s\n", "(", newp->getX(), ",", newp->getY(), ")");

    p.modify(p); //modifies point p 
    p.modify(newp); //modifies point newp

    p.arrayMaker(); //makes array 

    cout << "Distance between two points\n";
    p.dis(p,*newp); // gets distance between two pointers


    Point* newp2 = new Point(5,6); // another heap
    delete newp;
    delete newp2;



    // overloading functions 
    // Point p2(4,5);
    // if(p2==p){
    //     cout << "YES\n"; 
    // }

    // Point p3 = p+p2;
    // printf("(%d, %d)\n", p3.getX(), p3.getY());

    cout << "End of program\n";
    return 0;
}

