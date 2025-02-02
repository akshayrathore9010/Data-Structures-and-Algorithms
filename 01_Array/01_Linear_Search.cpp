#include <iostream>
using namespace std;

int findTheTarget(int arr[], int n, int target)
{
    for (int i = 0; i < n ; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main()

{

    int arr[] = {1, 2, 3, 4};
    int n = 4;
    int target = 4;

    int ans = findTheTarget(arr, n, target);

    if (ans == -1)
        puts("Target not found");

    else
        cout << "Target found at index " << ans;
    return 0;
}