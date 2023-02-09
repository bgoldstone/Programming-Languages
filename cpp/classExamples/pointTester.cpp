#include <iostream>
#include "../point/Point.h"
using namespace std;

int main()
{
    Point *p = new Point(2, 2);
    Point *q = new Point(1, 1);
    Point *s = new Point(2, 2);
    cout << bool(*p == *s) << endl;
    Point r = *p + *q;
    cout << r.str() << endl;
    cout << s->str() << endl;
    return 0;
}