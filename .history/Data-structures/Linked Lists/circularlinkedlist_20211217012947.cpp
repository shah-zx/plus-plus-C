#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// For inserting at head

void InsertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)  // Edge case
    {
        n->next = n;
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void InsertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        InsertAtHead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void Display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << temp->data;
}

void DeleteAthead(node *head)
{
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    node *ToDelete = head;
    temp->next = head->next;
    head = head->next;
    delete ToDelete;
}


void Deletion(node *head, int pos)
{
    if (pos == 1)
    {
        DeleteAthead(head);
        return;
    }

    node *temp = head;
    int count = 0;
    while (count != pos)
    {
        temp = temp->next;
        count++;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}

int main()
{
    node *head = NULL;
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 5);
    Display(head);
    Deletion(head , 2);
    Display(head);
}


