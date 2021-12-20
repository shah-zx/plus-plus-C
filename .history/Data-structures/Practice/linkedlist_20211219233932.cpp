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

void InsertAtTail(Node *&head, int x)
{
    Node *n = new Node(x);
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
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
}

int main()
{
    Node * head=NULL;
    InsertAtTail(head , 1);
    InsertAtTail(head , 2);
    InsertAtTail(head , 3);
    InsertAtTail(head , 4);
    
}