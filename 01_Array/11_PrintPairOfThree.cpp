#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout <<"( " <<arr[i] << ", " << arr[j] << ", " << arr[k] << " "<<" )";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main()
{

    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);

    return 0;
}