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
   
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void Delete(Node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    Node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int main()
{
    Node *head = NULL;
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    Display(head);
    // Delete(head , 3);
    // Display(head);    

}