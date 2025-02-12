#include <iostream>
using namespace std;
void solve(int arr[])
{

    cout << "Size Outside main function : " << sizeof(arr) << endl;

    cout << arr << endl
         << &arr << endl;

    arr[0] = 51;
}

int main()
{

    int arr[10] = {1, 2, 3, 4};
    cout << "Size Inside main function : " << sizeof(arr) << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << arr << endl
         << &arr << endl;
    puts("\nCalling Solve Function");
    solve(arr);

    puts("\nBack to the main function");

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}