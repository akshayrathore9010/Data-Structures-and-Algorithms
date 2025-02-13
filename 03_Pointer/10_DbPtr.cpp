#include <iostream>
using namespace std;

void update1(int *p)
{
    p = p + 1;
}
void update2(int *p)
{
    *p = *p + 1;
}

int main()
{

    int a = 5;
    int *p = &a;
    puts("Before ");
    cout << a << endl
         << p << endl
         << *p << endl;
         
    puts("\nAfter up1");
    update1(p);
    cout << a << endl
         << p << endl
         << *p << endl;

    puts("\nAfter up2");
    update2(p);
    cout << a << endl
         << p << endl
         << *p << endl;

    return 0;
}