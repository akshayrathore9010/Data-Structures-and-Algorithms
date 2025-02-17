#include <iostream>
using namespace std;

void minInArray(int arr[], int size, int index, int &mini)
{
    // Base Case
    if (index == size)
        return;

    // Update the maximum value
    mini = min(arr[index], mini);

    // Recursive call to the next element
    minInArray(arr, size, index + 1, mini);
}

int main()
{
    int arr[] = {23, 1,4, 67, 895, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    int mini = arr[index];

    minInArray(arr, size, index, mini);

    cout << "The minimum value in the array is: " << mini << endl;

    return 0;
}