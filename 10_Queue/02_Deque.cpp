#include <iostream>
using namespace std;

class Deque
{
private:
    int *arr;
    int n;
    int front;
    int rear;

public:
    Deque(int size)
    {
        arr = new int[size];
        n = size;
        front = -1;
        rear = -1;
    }
    void pushFront(int val)
    {
        if (front == 0)
        {
            puts("Overflow");
        }
        else if (front == -1 && rear == -1)
        {
            front++;
            rear++;
            arr[front] = val;
        }
        else
        {
            front--;
            arr[front] = val;
        }
    }
    void pushBack(int val)
    {
        if (rear == n - 1)
        {
            puts("Overflow");
        }
        else if (front == -1 && rear == -1)
        {
            rear++;
            front++;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }
    void popFront()
    {
        if (front == -1 && rear == -1)
        {
            puts("Underflow");
        }
        else if (front == rear)
        {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }
    void popBack()
    {

        if (front == -1 && rear == -1)
        {
            puts("Underflow");
        }
        else if (front == rear)
        {
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        else
        {
            arr[rear] = -1;
            rear--;
        }
    }
    void print()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{

    Deque dq(4);
    dq.pushFront(1);
    dq.print();
    dq.pushBack(4);
    dq.print();
    dq.pushBack(10);
    dq.print();
    dq.pushBack(20);
    dq.print();

    dq.popFront();
    dq.print();
    dq.popFront();
    dq.print();
    dq.popBack();
    dq.print();
    dq.pushFront(5);
    dq.print();
    dq.popBack();
    dq.print();
    dq.popBack();
    dq.popBack();
    return 0;
}