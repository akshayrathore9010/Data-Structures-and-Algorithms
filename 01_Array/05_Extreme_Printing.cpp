#include <iostream>
using namespace std;

void swap(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        if (start == end)
        {
            cout << arr[start++] << " ";
        }
        else
        {

            cout << arr[start++] << " ";
            cout << arr[end--] << " ";
        }
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);

    swap(arr, size);

    return 0;
}
