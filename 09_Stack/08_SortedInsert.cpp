#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &s, int val)
{

    if (s.empty())
    {
        s.push(val);
        return; 
    }

    if (!s.empty() && s.top() < val)
    {
        s.push(val);
        return;
    }

    int topElem = s.top();
    s.pop();
    sortedInsert(s, val);
    s.push(topElem);
}
void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int val = 23;
    print(s);

    sortedInsert(s, val);

    print(s);
    return 0;
}