#include <iostream>
using namespace std;

void update(int *p)
{
    cout << "Address stored in 'p' : " << p << endl;
    cout << "Address of 'p' is : " << &p << endl;
    *p = *p + 15;
}

int main()
{

    int a = 5;
    cout << "Address of 'a' is : " << &a << endl;

    int *ptr = &a;
    cout << "Address stored in 'ptr' : " << ptr << endl;
    cout << "Address of 'ptr' is : " << &ptr << endl;
    update(ptr);
    cout << "Value of 'a' is : " << a << endl;

    return 0;
}