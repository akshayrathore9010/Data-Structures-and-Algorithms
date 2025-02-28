#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void solve(vector<int> &arr, vector<int> &ans)
{
    stack<int> s;
    int n = arr.size();

    for (int i = 0; i < n; i++) 
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
    vector<int> ans(v.size(), -1);

    solve(v, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "  ";
    }

    return 0;
}
