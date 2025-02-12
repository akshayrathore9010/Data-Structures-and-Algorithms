#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;
    int *q = p;
    int *r = q;

    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;
    cout << "p: " << p << endl;
    cout << "&p: " << &p << endl;
    cout << "*p: " << *p << endl;
    cout << "q: " << q << endl;
    cout << "&q: " << &q << endl;
    cout << "*q: " << *q << endl;
    cout << "r: " << r << endl;
    cout << "&r: " << &r << endl;
    cout << "*r: " << *r << endl;
    cout << "(*p)*2 + (*r)*3: " << (*p)*2 + (*r)*3 << endl;
    cout << "(*p/2) - (*q)/2: " << (*p/2) - (*q)/2 << endl;

    return 0;
}