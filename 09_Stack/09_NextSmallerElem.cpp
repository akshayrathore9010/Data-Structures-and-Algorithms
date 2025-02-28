#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void solve(stack<int> &s, vector<int> &arr, vector<int> &ans)
{
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int elem = arr[i];

        while (!s.empty() && s.top() >= elem)
        {
            s.pop();
        }

        if (s.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = s.top();
        }

        s.push(elem);
    }
}

int main()
{
    vector<int> v = {8, 4, 6, 2, 3};
    stack<int> s;
    vector<int> ans(v.size(), -1); 

    solve(s, v, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "  ";
    }

    return 0;
}
