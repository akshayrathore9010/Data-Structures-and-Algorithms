#include <iostream>
#include <vector>
using namespace std;

void transposeMatrix(vector<vector<int>> &arr)
{

    int rowSize = arr.size();
    int colSize = arr[0].size();

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
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
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    cout << endl;
    transposeMatrix(arr);

    return 0;
}