#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int capacity)
    {
        arr = new int[capacity];
        size = capacity;
        top1 = -1;
        top2 = size;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push1(int value)
    {
        if (top1 < top2 - 1)
        {
            arr[++top1] = value;
        }
        else
        {
            cout << "Stack Overflow\n";
        }
    }

    void push2(int value)
    {
        if (top1 < top2 - 1)
        {
            arr[--top2] = value;
        }
        else
        {
            cout << "Stack Overflow\n";
        }
    }

    void pop1()
    {
        if (top1 >= 0)
        {
            arr[top1] = 0;
            top1--;
        }
        else
        {
            cout << "Stack Underflow\n";
        }
    }

    void pop2()
    {
        if (top2 < size)
        {
            arr[top2] = 0;
        }
        else
        {
            cout << "Stack Underflow\n";
        }
    }

    void print()
    {
        cout << "Top 1 : " << top1 << endl
             << "Top 2 : " << top2 << endl;
        cout << "Stack 1 elements: ";
        for (int i = 0; i <= top1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Stack 2 elements: ";
        for (int i = top2; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack s(5);

    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push2(50);
    s.push2(40);

    s.print();

    s.pop1();
    s.pop1();
    s.pop2();
    s.pop2();
    s.pop2();

    s.print();

    return 0;
}
