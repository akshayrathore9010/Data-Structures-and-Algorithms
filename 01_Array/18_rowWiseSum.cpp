#include <iostream>
#include <vector>
using namespace std;

void rowSum(vector<vector<int>> &arr)
{

    int rowSize = arr.size();
    int colSize = arr[0].size();

    for (int i = 0; i < rowSize; i++)
    {
        int sum = 0;
        for (int j = 0; j < colSize; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
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

    rowSum(arr);
    return 0;
}