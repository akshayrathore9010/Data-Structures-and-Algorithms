#include <iostream>
using namespace std;

void find(int arr[][3], int rowSize, int colSize, int target)
{

    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Found at index : " << i<<" "<<j;
                return;
            }
        }
    }
    puts("Not Found");
}

int main()
{

    int arr[3][3] = {
        {10, 20, 50},
        {30, 40, 70},
        {50, 60, 90},
    };

    int rowSize = 3;
    int colSize = 3;
    int target = 30;

    find(arr, rowSize, colSize, target);

    return 0;
}