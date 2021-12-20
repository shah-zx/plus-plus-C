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

void Delete(Node *&head, int val)
{

    Node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    Node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
    if (todelete == head)
    {
        head = head->next;
        delete head;
    }
}

void Display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
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
    Insert(head, 4);
    Display(head);
    // Delete(head, 3);
    // Display(head);
}