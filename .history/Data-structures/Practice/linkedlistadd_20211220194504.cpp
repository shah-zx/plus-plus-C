#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void Insert(Node *&head, int val)
{
    Node *n = new Node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void Display(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
        cout << temp->data << "->";
    }
    cout << "NULL"<<endl;
}

int main()
{

    Node *head = NULL;
    Insert(head, 1);
    Insert(head, 2);
    Insert(head, 3);
    Insert(head, 4);
    Display(head);
}