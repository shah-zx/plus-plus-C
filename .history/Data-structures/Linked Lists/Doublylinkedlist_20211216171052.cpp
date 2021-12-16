#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void InsertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }

    head = n;
}

void Insertinlist(node *&head, int val)
{

    // Our edge case :

    if (head == NULL)
    {
        InsertAtHead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void DisplayDLinkedList(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

// For deletion at the first position :

void DeleteatFirst(node *&head)
{
    node * toDelete = head;
    head = head->next;
    head->prev = NULL;
}

// For deletion :

void Deletion(node *head, int pos)
{
    if (pos == 1)
    {
        DeleteatFirst(head);
    }
    node *temp = head;
    int count = 1;
    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    if (head != NULL)
    {

        temp->prev->next = temp->next;
    }

    temp->next = temp->prev->next;
    delete temp;
}

int main()
{

    node *head = NULL;
    Insertinlist(head, 1);
    Insertinlist(head, 2);
    Insertinlist(head, 3);
    Insertinlist(head, 4);
    DisplayDLinkedList(head);
    InsertAtHead(head, 5);
    DisplayDLinkedList(head);
}
