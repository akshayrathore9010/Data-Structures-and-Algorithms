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

void convertToLowerCase(char arr[], int n)
{
    int len = getLength(arr, n);
    for (int i = 0; i < len; i++)
    {
        char ch = arr[i];
        if (ch >= 'A' && ch <= 'Z')
            ch = ch - 'A' + 'a';
        arr[i] = ch;
    }
    cout << arr << endl;
}

int main()
{
    char arr[100];
    puts("Enter Input : ");
    cin.getline(arr, 100);

    convertToLowerCase(arr, 100);
    return 0;
}