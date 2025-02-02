#include <iostream>
using namespace std;

void printPair(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "( " << arr[i] << ", " << arr[j] << " )" ;
        }
    cout<<endl;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    printPair(arr, size);

    return 0;
}
