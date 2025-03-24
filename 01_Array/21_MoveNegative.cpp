#include <bits/stdc++.h>
using namespace std;

void MoveNegative(int arr[], int size)
{
    int low = 0;
    int high = size - 1;

    while (low < high)
    {
        if (arr[low] < 0)
            low++;
        else if (arr[high] >= 0)
            high--;
        else
            swap(arr[low++], arr[high--]);
    }
    for(int i =0;i<size;i++){
        cout<<arr[i]<<' ';
    }
}

int main()
{

    int arr[] = {-1, 4, 5, 6, -4, -6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    MoveNegative(arr, size);

    return 0;
}