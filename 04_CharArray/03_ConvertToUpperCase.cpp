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

void convertToUpperCase(char arr[], int n)
{
    int len = getLength(arr, n);
    for (int i = 0; i < len; i++)
    {
        char ch = arr[i];
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 'a' + 'A';
        arr[i] = ch;
    }
    cout << arr << endl;
}

int main()
{
    char arr[100];
    puts("Enter Input : ");
    cin.getline(arr, 100);

    convertToUpperCase(arr, 100);
    return 0;
}