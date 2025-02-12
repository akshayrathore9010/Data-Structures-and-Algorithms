#include <iostream>
using namespace std;
int main()
{

    int x = 5;
    int *ptr1 = &x;
    int *ptr2 = ptr1;

    cout << ptr1 << endl
         << ptr2 << endl;

    cout << *ptr1 << endl
         << *ptr2 << endl;

    return 0;
}