#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &arr, int start, int end, int mid)
{

    int leftArrayLength = mid - start + 1;
    int rightArrayLength = end - mid;

    int *LeftArray = new int[leftArrayLength];
    int *RightArray = new int[rightArrayLength];

    int index = start;

    for (int i = 0; i < leftArrayLength; i++)
    {
        LeftArray[i] = arr[index++];
    }
    index = mid + 1;

    for (int i = 0; i < rightArrayLength; i++)
    {
        RightArray[i] = arr[index++];
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = start;

    while (leftIndex < leftArrayLength && rightIndex < rightArrayLength)
    {
        if (LeftArray[leftIndex] < RightArray[rightIndex])
        {
            arr[mainIndex] = LeftArray[leftIndex];
            leftIndex++;
            mainIndex++;
        }
        else
        {
            arr[mainIndex] = RightArray[rightIndex];
            rightIndex++;
            mainIndex++;
        }
    }
    while (leftIndex < leftArrayLength)
    {
        arr[mainIndex] = LeftArray[leftIndex];
        leftIndex++;
        mainIndex++;
    }
    while (rightIndex < rightArrayLength)
    {
        arr[mainIndex] = RightArray[rightIndex];
        rightIndex++;
        mainIndex++;
    }
}

void MergeSort(vector<int> &arr, int start, int end)
{

    if (start >= end)
        return;

    int mid = (start + end) / 2;
    MergeSort(arr, start, mid);
    MergeSort(arr, mid + 1, end);
    Merge(arr, start, end, mid);
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
    int start = 0;
    int end = n - 1;

    puts("Enter the array Elements");

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    cout << "Array Before Sorting : ";
    printArray(arr);

    cout << endl;

    MergeSort(arr, start, end);

    cout << "Array After Sorting : ";
    printArray(arr);

    return 0;
}