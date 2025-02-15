#include <iostream>
using namespace std;

int getFactorial(int n)
{
    // Base Case
    if (n == 0)
        return 1;

    // recursive call
    // fact(n) = n*fact(n-1);
    // big problem -> fact(n);
    // chotti problem -> fact(n-1);

    int finalAns = n * getFactorial(n - 1);
    return finalAns;

    // processing
}

int main()
{

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int ans = getFactorial(n);
    cout << "Factorial of " << n << " is : " << ans << endl;

    return 0;
}