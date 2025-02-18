#include <iostream>
using namespace std;

void printDigit(int n)
{
    if (n == 0)
        return;
    int digit = n % 10;
    int newNum = n / 10;
    printDigit(newNum);
    cout << digit << " ";
}

int main()
{

    int n = 12345;
    printDigit(n);

    return 0;
}