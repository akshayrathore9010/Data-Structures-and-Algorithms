#include <iostream>
using namespace std;
int main()
{

    // int arr[4] = {12, 84, 16, 18};

    // cout << arr << endl;
    // cout << arr[0] << endl;
    // cout << &arr << endl;
    // cout << &arr[0] << endl;

    // int *p = arr;
    // cout << p << endl;
    // cout << &p << endl;

    // *************************************

    // cout << *arr << endl;
    // cout << arr[0] << endl;
    // cout << *arr + 1 << endl;
    // cout << *(arr) + 1 << endl;
    // cout << *(arr + 1) << endl;
    // cout << arr[1] << endl;
    // cout << *(arr + 2) << endl;
    // cout << *(arr + 3) << endl;

    // int i = 1;
    // cout << i[arr] << endl;
    // cout << arr[i] << endl;
    // cout << *(arr + i) << endl;
    // cout << *(i + arr) << endl;

    int brr[10];
    cout << sizeof(brr) << endl;

    int *pp = brr;
    cout << sizeof(pp) << endl;
    cout << sizeof(*pp) << endl;

    return 0;
}