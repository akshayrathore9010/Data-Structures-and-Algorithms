#include <iostream>
using namespace std;
int main()
{

    // ! Declaring
    int arr0[4][3];

    // ! Initialise
    int arr[3][3] = {
        {10, 20, 50},
        {30, 40, 70},
        {50, 60, 90},
    };

    // int arr[3][2] = {10, 20, 30, 40, 50, 60};

    // int arr[3][2]={10,20};

    cout << "accessing : " << arr[1][0] << endl;

    //! travering entire array

    int rowSize = 3;
    int colSize = 3;

    for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
    {
        for (int colIndex = 0; colIndex < colSize; colIndex++)
        {
            cout << arr[rowIndex][colIndex] << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
    {
        for (int colIndex = 0; colIndex < colSize; colIndex++)
        {
            cout << arr[colIndex][rowIndex] << " ";
        }
        cout << endl;
    }

    cout << endl;
    for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
    {
        for (int colIndex = 0; colIndex < colSize; colIndex++)
        {
            if (rowIndex == colIndex)
            {
                cout << arr[colIndex][rowIndex] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;

    for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
    {
        for (int colIndex = 0; colIndex < colSize; colIndex++)
        {
            if (rowIndex + colIndex == rowSize - 1)
            {
                cout << arr[rowIndex][colIndex] << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    int arr1[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the value for (" << i << ", " << j << ") : ";
            cin >> arr[i][j];
        }
    }

    cout << "Printing 2D array : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
