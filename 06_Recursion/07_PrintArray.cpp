#include <iostream>
using namespace std;

void printArray(int arr[], int size, int index)
{
    if (index == size)
        return;

    // ek case me karunga
    cout << arr[index++] << " ";
    // baki recursion dekh lega
    printArray(arr, size, index);
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int index = 0;
    printArray(arr, size, index);

    return 0;
}