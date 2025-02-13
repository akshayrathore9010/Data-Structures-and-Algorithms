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

bool reverseCharArray(char arr[], int n)
{
    int len = getLength(arr, n);

    int i = 0;
    int j = len - 1;

    while (i <= j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char arr[100];
    puts("Enter Input : ");
    cin.getline(arr, 100);
    bool ans = reverseCharArray(arr, 100);

    if (ans == 1)
        puts("Is Palindrome");
    else
        puts("Not a Palindrome");
    return 0;
}