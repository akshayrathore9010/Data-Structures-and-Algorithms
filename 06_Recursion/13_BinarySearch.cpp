#include <iostream>
using namespace std;

int recursiveBinarySearch(int arr[], int size, int s, int e, int target)
{

    if (s > e)
        return -1;

    int mid = (s + e) / 2;

    if (arr[mid] == target)
        return mid;

    if (target > arr[mid])
        return recursiveBinarySearch(arr, size, mid + 1, e, target);
    else

        return recursiveBinarySearch(arr, size, s, mid - 1, target);
}

int main()
{

    int arr[] = {2, 3, 4, 5, 5, 12, 33, 34, 67, 87};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 87;

    int result = recursiveBinarySearch(arr, size, 0, size - 1, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}