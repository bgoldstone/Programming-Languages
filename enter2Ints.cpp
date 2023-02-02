#include <iostream>
using namespace std;

int main()
{
    int a, b;
    printf("Please enter integer a:");
    cin >> a;

    printf("\nPlease enter integer b:");
    scanf("%d", &b);

    int *pointerA = &a;
    int *pointerB = &b;

    cout << "\n"
         << *pointerA << " " << *pointerB << endl;
    return 0;
}