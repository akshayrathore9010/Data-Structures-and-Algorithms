#include <iostream>
using namespace std;

int findTheMax(int arr[], int n)
{

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{

    int arr[] = {56, 3, 22, 76, 12, 8, 34};
    int n = 7;
    int res = findTheMax(arr, n);

    cout << "Maximum element is : " << res;

    return 0;
}