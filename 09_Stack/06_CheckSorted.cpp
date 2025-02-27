#include <iostream>
#include <stack>
#include <climits>
using namespace std;

bool checkSorted(stack<int> &s, int elem1)
{
    if (s.empty())
    {
        // iska matlab stack poora compare ho chuka h aur sorted h
        return true;
    }
    int elem2 = s.top();
    s.pop();

    if (elem2 < elem1)
    {
        bool aageKaAns = checkSorted(s, elem2);
        s.push(elem2);
        return aageKaAns;
    }
    else
    {
        return false;
    }
}

int main()
{

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int elem1 = INT_MAX;
    cout << checkSorted(s, elem1) << endl;

    return 0;
}