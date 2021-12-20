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
    Node *n1 = new Node(val);

    if (head == NULL)
    {
        head = n1;
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    temp->next = n1;
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
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    Node *head = NULL;
    Insert(head, 1);
    Insert(head, 2);
    Insert(head, 3);
    Display(head);
}