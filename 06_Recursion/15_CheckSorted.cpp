#include <iostream>
using namespace std;

bool checkSorted(int arr[], int n, int index)
{

    if (index == n - 1)
        return true;
    bool currAns = arr[index] < arr[index + 1];
    bool recAns = checkSorted(arr, n, index + 1);
    return currAns && recAns;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    bool ans = checkSorted(arr, size, index);
    cout << "Array is sorted or not: " << (ans ? "Yes" : "No") << endl;

    return 0;
}