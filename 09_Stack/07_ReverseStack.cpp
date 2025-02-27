#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &s, int val)
{
    if (s.empty())
    {
        s.push(val);
        return;
    }

    int topElem = s.top();
    s.pop();
    insertAtBottom(s, val);

    s.push(topElem);
}

void reverseStack(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }

    int topElem = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s, topElem);
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

    cout << "Original Stack: ";
    print(s);

    reverseStack(s);

    cout << "Reversed Stack: ";
    print(s);

    return 0;
}
