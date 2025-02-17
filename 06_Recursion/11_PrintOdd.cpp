#include <iostream>
using namespace std;

void printAllOdd(int arr[], int size, int index)
{
    if (index == size)
        return;

    if ((arr[index]) & 1)
        cout << arr[index] << " ";

    printAllOdd(arr, size, index + 1);
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int index = 0;
    printAllOdd(arr, size, index);

    return 0;
}