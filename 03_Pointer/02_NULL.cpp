#include <iostream>
using namespace std;
int main()
{

    //! Bad practice
    // int* ptr;
    // cout<<*ptr<<endl;

    //! NULL Pointer
    // int* ptr = 0;
    // int* ptr = NULL;
    int *ptr = nullptr;

    cout << ptr << endl;

    return 0;
}