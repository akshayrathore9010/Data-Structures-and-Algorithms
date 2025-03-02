#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int> &q)
{
    stack<int> st;
    while (!q.empty())
    {
        int elem = q.front();
        q.pop();

        st.push(elem);
    }
    while (!st.empty())
    {
        int elem = st.top();
        st.pop();

        q.push(elem);
    }
}

void reverseQueueRec(queue<int> &q)
{
    if (q.empty())
        return;

    int frontElem = q.front();
    q.pop();
    reverseQueue(q);
    q.push(frontElem);
}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // reverseQueue(q);
    reverseQueueRec(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}