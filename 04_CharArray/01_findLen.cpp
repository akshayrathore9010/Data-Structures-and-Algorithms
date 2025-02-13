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
int main()
{
    char arr[100];
    puts("Enter Input");
    cin.getline(arr, 100);

    cout << getLength(arr, 100);

    return 0;
}