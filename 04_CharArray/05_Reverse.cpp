#include <iostream>
using namespace std;

int getLength(char arr[], int size)
{
    int count = 0, i = 0;
    while (arr[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

void reverseCharArray(char arr[], int n)
{
    int len = getLength(arr, n);

    int i = 0;
    int j = len - 1;

    while (i <= j)
        swap(arr[i++], arr[j--]);

    cout << arr;
}

int main()
{
    char arr[100];
    puts("Enter Input : ");
    cin.getline(arr, 100);
    reverseCharArray(arr, 100);
    return 0;
}