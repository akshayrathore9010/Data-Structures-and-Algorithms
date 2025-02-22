#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(int val, Node *&head, Node *&tail)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void printReverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

void insertAtTail(int val, Node *&head, Node *&tail)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int getLength(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtPosition(int position, int value, Node *&head, Node *&tail)
{
    int len = getLength(head);
    if (position == 1)
        insertAtHead(value, head, tail);
    else if (position == len + 1)
        insertAtTail(value, head, tail);
    else
    {
        Node *temp = head;
        for (int i = 1; i < position - 1; i++)
            temp = temp->next;
        Node *newNode = new Node(value);
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
}

void deleteFromPos(int position, Node *&head, Node *&tail)
{
    if (!head)
    {
        cout << "No Nodes to delete" << endl;
        return;
    }
    if (head == tail)
    {
        delete head;
        head = tail = NULL;
    }
    else if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }
    else if (position == getLength(head))
    {
        Node *temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < position; i++)
            temp = temp->next;
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(10, head, tail);
    insertAtHead(20, head, tail);
    insertAtHead(30, head, tail);

    insertAtTail(40, head, tail);
    insertAtTail(50, head, tail);
    insertAtTail(60, head, tail);

    insertAtPosition(1, 55, head, tail);
    insertAtPosition(2, 66, head, tail);
    insertAtPosition(9, 77, head, tail);

    print(head);

    deleteFromPos(9, head, tail);
    print(head);
    deleteFromPos(1, head, tail);
    print(head);
    deleteFromPos(5, head, tail);
    print(head);

    return 0;
}
