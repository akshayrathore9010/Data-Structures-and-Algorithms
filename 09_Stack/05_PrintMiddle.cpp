#include <iostream>
#include <stack>
using namespace std;

void printMiddle(stack<int> &s, int count)
{

    if (count == 0)
    {
        cout << s.top() << endl;
        return;
    }

    int topElem = s.top();
    s.pop();
    count--;

    printMiddle(s, count);

    s.push(topElem);
}

int main()
{

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    int count = s.size()/2;
    printMiddle(s, count);

    return 0;
}