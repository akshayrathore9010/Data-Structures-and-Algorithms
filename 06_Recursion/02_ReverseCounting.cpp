#include <iostream>
using namespace std;

// Print counting from n to 1
void printCounting(int n)
{
    // Base Case
    if (n == 0)
        return;

    // Processing
    cout << n << " ";

    // Recursive Call
    printCounting(n - 1);
}
int main()
{
    printCounting(6);

    return 0;
}