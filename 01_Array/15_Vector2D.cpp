#include <iostream>
#include <vector>
using namespace std;

void search(vector<vector<int>> &arr, int target)
{

    int rowSize = arr.size();
    int colSize = arr[0].size();

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Found at index " << i << " " << j;
                return;
            }
        }
    }
    puts("Not Found");
}
int main()
{

    vector<vector<int>> arr(4, vector<int>(3, 0));

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

    puts("\nEnter the target");
    int t;
    cin >> t;

    search(arr, t);

    return 0;
}