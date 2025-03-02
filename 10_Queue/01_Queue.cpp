#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int n;
    int front;
    int rear;

public:
    Queue(int size)
    {
        arr = new int[size];
        n = size;
        front = -1;
        rear = -1;
    }
    void push(int val)
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
    void pop()
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
    int getFront()
    {
        if (front == -1)
        {
            puts("Queue is empty");
        }
        else
        {
            return arr[front];
        }
    }
    int getRear()
    {
    }
    int getSize()
    {

        if (front == -1 && rear == -1)
        {
            return 0;
        }
        return rear - front + 1;
    }
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
            return true;
        else
            return false;
    }
};

int main()
{

    Queue q(5);

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.getSize() << endl;
    q.push(5);
    cout << q.getFront() << endl;
    q.push(6);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout << q.getSize() << endl;
    return 0;
}