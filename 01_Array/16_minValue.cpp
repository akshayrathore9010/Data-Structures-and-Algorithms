#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findTheMinimun(vector<vector<int>> &arr)
{

    int rowSize = arr.size();
    int colSize = arr[0].size();

    int minValue = INT_MAX;

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (arr[i][j] < minValue)
            {
                minValue = arr[i][j];
            }
        }
    }
    return minValue;
}

int main()
{

    vector<vector<int>> arr(3, vector<int>(3));

    int rowSize = arr.size();
    int colSize = arr[0].size();

    puts("Enter the array ");
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cin >> arr[i][j];
        }
    }

    puts("\nArray is ");
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    int ans = findTheMinimun(arr);
    cout << "Minimum value is : " << ans;

    return 0;
}