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
    if (head == NULL) // Edge case
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

void Insertattail(node * &head , int val)
{
    node * temp = head;
    node * n = new node(val);
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    
}

void Display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
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
    int count = 1;
    while (count != pos)
    {
        temp = temp->next;
        count++;
    }
    node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
// For adding the even nodes after the odd nodes  :

void AddEvafterOdd(node *&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;

    while (odd->next != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenStart;
    if (odd->next != NULL)
    {
        even->next = NULL;
    }
}

int main()
{
    node *head = NULL;
    // InsertAtTail(head, 1);
    // InsertAtTail(head, 2);
    // InsertAtTail(head, 3);
    // InsertAtTail(head, 4);
    // InsertAtTail(head, 5);
    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        Insertattail(head, arr[i]);
    }
    Display(head);
    // Deletion(head, 2);
    // Display(head);
    AddEvafterOdd(head);
    display(head);
}
