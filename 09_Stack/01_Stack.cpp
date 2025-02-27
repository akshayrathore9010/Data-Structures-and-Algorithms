#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int capacity)
    {
        arr = new int[capacity];
        size = capacity;
        top = -1;
    }

    ~Stack()
    {
        puts("Memory Free");
        delete[] arr;
    }

    void push(int value)
    {
        if (top == size - 1)
        {
            puts("Stack Overflow");
        }
        else
        {
            arr[++top] = value;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            puts("Stack Underflow");
        }
        else
        {
            top--;
        }
    }

    int getSize()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    int getTop()
    {
        if (top == -1)
        {
            puts("There is no element at the top, as stack is empty");
            return -1;
        }
        return arr[top];
    }

    void print()
    {
        if (isEmpty())
        {
            puts("Stack is empty");
            return;
        }

        puts("Printing Stack:");
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s(3);

    s.print();
    s.push(10);
    s.print();
    s.push(20);
    s.print();
    s.push(30);
    s.print();
    s.push(40);

    cout << s.getSize() << endl;
    cout << s.getTop() << endl;
    cout << s.isEmpty() << endl;

    s.pop();
    s.print();
    s.pop();
    s.pop();
    s.pop();
    cout << s.getSize() << endl;

    return 0;
}
