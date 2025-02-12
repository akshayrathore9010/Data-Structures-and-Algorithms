#include <iostream>
using namespace std;
int main()
{

    int a = 5;
    int *ptr = &a;
    cout << sizeof(ptr) << endl;

    char ch = 'a';
    char *ctr = &ch;
    cout << sizeof(ctr) << endl;

    double d = 5.01;
    double *dtr = &d;
    cout << sizeof(dtr) << endl;

    
 
        return 0;
}