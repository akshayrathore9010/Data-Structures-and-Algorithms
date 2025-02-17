#include <iostream>
using namespace std;

int pow(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recursive relation
    int ans = 2 * pow(n - 1);
    return ans;

    // processing
}

int main()
{
    int ans = pow(4);
    cout << ans;

    return 0;
}