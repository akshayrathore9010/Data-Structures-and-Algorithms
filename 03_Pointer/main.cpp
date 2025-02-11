#include <iostream>
using namespace std;
int main()
{

    // int a = 5;
    // int b = 5;
    // cout << a << endl;
    // cout << b << endl;
    // cout << "Address of a : " << &a << endl;
    // cout << "Address of b : " << &b << endl;

    // *************************

    int x = 50;
    // pointer create
    int *ptr = &x;

    // access the value ptr is pointing to
    cout << "Address of 'x' is : " << &x << endl;
    cout << "Value stored at ptr is : " << ptr << endl;
    cout << "Value ptr is pointing to is : " << *ptr << endl;
    cout << "Address of ptr : " << &ptr << endl;

    return 0;
}