#include <iostream>
using namespace std;

int findTheMin(int arr[], int n)
{

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{

    int arr[] = {56, 3, 22, 76, 12, 8, 34};
    int n = 7;
    int res = findTheMin(arr, n);

    cout << "Minimum element is : " << res;

    return 0;
}