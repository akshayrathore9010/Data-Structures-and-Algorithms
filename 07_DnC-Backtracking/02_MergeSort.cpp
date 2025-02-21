#include <iostream>
using namespace std;

void merge(int arr[], int s, int e, int mid)
{

    // create left and right array
    int leftLen = mid - s + 1;
    int rightLen = e - mid;

    int *leftArr = new int[leftLen];
    int *rightArr = new int[rightLen];

    // fill or copy the left and right arrays
    // copy original array -> values
    // original array ka starting index
    int index = s;

    // copying into left array
    for (int i = 0; i < leftLen; i++)
    {
        leftArr[i] = arr[index];
        index++;
    }

    // copying into right array
    index = mid + 1;
    for (int i = 0; i < rightLen; i++)
    {
        rightArr[i] = arr[index];
        index++;
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while (leftIndex < leftLen && rightIndex < rightLen)
    {
        if (leftArr[leftIndex] < rightArr[rightIndex])
        {
            arr[mainArrayIndex] = leftArr[leftIndex];
            leftIndex++;
            mainArrayIndex++;
        }
        else
        {
            arr[mainArrayIndex] = rightArr[rightIndex];
            rightIndex++;
            mainArrayIndex++;
        }
    }
 
    while (leftIndex < leftLen)
    {
        arr[mainArrayIndex] = leftArr[leftIndex];
        leftIndex++;
        mainArrayIndex++;
    }
 
    while (rightIndex < rightLen)
    {
        arr[mainArrayIndex] = rightArr[rightIndex];
        rightIndex++;
        mainArrayIndex++;
    }
 
    // delete heap memory
    delete[] leftArr;
    delete[] rightArr;
}
 
void mergeSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e, mid);
}

int main()
{

    int arr[] = {10,32,2,56,132,90,506,82,69};
    int size = 9;
    int s = 0;
    int e = size-1;

    mergeSort(arr,s,e);

    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}