#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

int getLen(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

//  return the head of new LL after the insertion
Node *insertAtHead(int value, Node *&head, Node *&tail)
{
    // LL is empty -> head and tail noth NULL ko point krre honge
    // it means we are creating first node of LL

    if (head == NULL && tail == NULL)
    {
        // Step 1 : create a new node
        Node *newNode = new Node(value);

        // Step 2 : head ko node pr lagado
        head = newNode;

        // Step 3 : tail ko node pr lagado
        tail = newNode;
    }
    else
    {
        // LL is not empty
        // pehle se node present hai
        // insert at head
        // Step 1 : create node
        Node *newNode = new Node(value);
        // Step 2 : connect this newNode to head node
        newNode->next = head;
        // Step 3 : head ko update krdo
        head = newNode;
    }
    return head;
}
Node *insertAtTail(int value, Node *&head, Node *&tail)
{
    // LL is empty -> head and tail noth NULL ko point krre honge
    // it means we are creating first node of LL

    if (head == NULL && tail == NULL)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // LL is not empty
        // Step 1 : create node
        Node *newNode = new Node(value);
        // Step 2 : connect this newNode to tail node
        tail->next = newNode;
        // Step 3 : tail ko update krdo
        tail = newNode;
    }
    return head;
}

void insertAtPosition(int pos, int val, Node *&head, Node *&tail)
{
    // assume -> valid posiion input
    int len = getLen(head);

    // agar position 1 h , matlab head p insert krna chahta hu
    if (pos == 1)
    {
        insertAtHead(val, head, tail);
    }

    // aur agar len+1 yani last position h matlab tail p insert krna chahta hu
    else if (pos == len + 1)
    {
        insertAtTail(val, head, tail);
    }
    else
    {
        // agar kisi specific position p insert krna h to
        Node *temp = head;
        for (int i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }
        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
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
int search(Node *head, int target)
{
    Node *temp = head;
    int position = 1; // Start position from 1

    while (temp != NULL)
    {
        if (target == temp->data)
        {
            return position; // Return the position if target is found
        }
        temp = temp->next;
        position++;
    }
    return -1;
}

void deleteNode(int pos, Node *&head, Node *&tail)
{
    if (head == NULL && tail == NULL)
    {
        puts("No Node to Delte");
        return;
    }
    else if (head == tail)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    else
    {
        if (pos == 1)
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
        else
        {
            Node *prev = head;
            for (int i = 0; i < pos - 2; i++)
                prev = prev->next;
            Node* curr = prev->next;
            Node* forward = curr->next;
            prev->next = forward;
            curr->next = NULL;
            delete curr;
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // LL is empty
    head = insertAtHead(10, head, tail);
    // 10 -> NULL
    head = insertAtHead(20, head, tail);
    // 20 -> 10 -> NULL
    head = insertAtHead(30, head, tail);
    // 30-> 20 -> 10 -> NULL
    head = insertAtTail(40, head, tail);
    // 30-> 20 -> 10 ->40-> NULL
    head = insertAtTail(50, head, tail);
    // No need to return , pointer pass kara h bhayaaaaaaa
    insertAtHead(60, head, tail);
    // Insert at position 3
    insertAtPosition(3, 25, head, tail);
    insertAtPosition(1, 5, head, tail);
    insertAtPosition(7, 50, head, tail);

    int pos = search(head, 99);
    if (pos != -1)
        cout << "Found at position " << pos << endl;
    else
        puts("Not Found");

    print(head);
    deleteNode(9, head, tail);
    print(head);

    //* Stack Memory
    // Node firstt;

    //* Dynamic Memory
    // Node *first = new Node(10);

    return 0;
}