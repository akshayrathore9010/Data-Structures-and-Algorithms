#include <iostream>
using namespace std;

void maxInArray(int arr[], int size, int index, int &maxi)
{
    // Base Case
    if (index == size)
        return;

    // Update the maximum value
    maxi = max(arr[index], maxi);

    // Recursive call to the next element
    maxInArray(arr, size, index + 1, maxi);
}

int main()
{
    int arr[] = {23, 4, 67, 895, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    int maxi = arr[index];

    maxInArray(arr, size, index, maxi);

    cout << "The maximum value in the array is: " << maxi << endl;

    return 0;
}