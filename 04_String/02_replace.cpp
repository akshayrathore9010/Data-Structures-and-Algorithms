#include <iostream>
using namespace std;

void replace(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == '@')
        {
            arr[i] = ' ';
        }
    }
    cout<<arr;
}
int main()
{

    char arr[100];
    puts("Enter Input : ");
    cin.getline(arr, 100);

    replace(arr, 100);

    return 0;
}