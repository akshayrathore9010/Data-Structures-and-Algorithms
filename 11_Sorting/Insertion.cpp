#include <bits/stdc++.h>
using namespace std;

void InsertionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n ; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
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

    InsertionSort(arr);

    cout << "Array After Sorting : ";
    printArray(arr);

    return 0;
}