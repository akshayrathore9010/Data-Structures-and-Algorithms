#include <iostream>
using namespace std;

void printOneAndZero(int arr[], int n)
{

    int zero = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            one++;
        }
        else
        {
            zero++;
        }
    }

    cout << "Zero's Are " << zero << endl;
    cout << "One's Are " << one;
}

int main()
{

    int arr[] = {0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0};
    int n = 12;
    printOneAndZero(arr, n);

    return 0;
}