#include <bits/stdc++.h>
using namespace std;

void RecursiveBubbleSort(vector<int> &arr, int n)
{

    // base case
    if (n == 1)
        return;

    int cnt = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            cnt++;
        }
    }

    if (cnt == 0)
        return;

    RecursiveBubbleSort(arr, n - 1);
}
void printArray(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    vector<int> arr(5);
    int n = arr.size();

    puts("Enter the array Elements");

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    cout << "Array Before Sorting : ";
    printArray(arr);

    cout << endl;

    RecursiveBubbleSort(arr, n);

    cout << "Array After Sorting : ";
    printArray(arr);

    return 0;
}