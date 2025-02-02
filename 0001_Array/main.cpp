#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    // ! Creation of Array

    int arr[10];

    //   int brr[] //error

    int crr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int drr[5] = {1, 2, 3, 4, 5};

    int err[5] = {1, 2, 3};

    // ! Accessing Array Elements

    // cout << arr[0] << endl;
    // cout << crr[0] << endl;
    // cout << err[2] << endl;
    // cout << err[4] << endl;
    // cout << drr[50] << endl;

    // ! fill

    // int arr0[5];
    // fill(arr0, arr0 + 5, 24);
    // for (auto i : arr0)
    //     cout << i << " ";
    // cout << endl;

    // ! Input

    // int arr1[5];
    // int n = sizeof(arr1) / sizeof(arr1[0]);
    // puts("Enter the elements of the array");
    // for (int i = 0; i < n; i++)
    //     cin >> arr1[i];

    // puts("The elements of the array are");
    // for (int i = 0; i < n; i++)
    //     cout << arr1[i] << " ";

    // ! Function with Array

    int arr2[5] = {11, 2, 3, 4, 5};
    int size = 5;
    print(arr2, size);

    return 0;
} 