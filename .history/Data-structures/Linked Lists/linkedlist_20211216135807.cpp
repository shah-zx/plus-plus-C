#include <iostream>
using namespace std;

class node
{
public:
    node *next;
    int data;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// For searching in the list :

bool Search(node *head, int key)
{

    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// For inserting at head :

void InsertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

// For inserting at tail :

void InsertAtTail(node *&head, int val)
{

    // Now we will make a node :
    node *n = new node(val);
    // Now if the linked list is empty :

    if (head == NULL)
    {
        head = n;
        return;
    }

    // Now we will make another pointer temp , equal to the head :
    node *temp = head;
    // Now we will traverse through the array :
    while (temp->next != NULL)
    {

        temp = temp->next;
    }
    // Once the array is traversed and next becomes NULL then the node n gets attached at the end of the array.
    temp->next = n;
}

// For deletion :

void Delete(node *&head, int val)
{
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void DeleteatFirst(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}
void List(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
// For reversing the nodes :

node *Reverse(node *head)
{
    node *prevptr = NULL;
    node *crtptr = head;
    node *nextptr;
    while (crtptr != NULL)
    {
        nextptr->next = crtptr->next;
        crtptr->next = prevptr;
        prevptr = crtptr;
        crtptr = nextptr;
    }
    return prevptr;
}

// For reversing k nodes :

node *Reversek(node *head, int k)
{
    int count = 0;
    node *prevptr = NULL;
    node *curptr = head;
    node *nextptr;

    while (curptr != NULL && count < k)
    {
        curptr->next = prevptr;
        nextptr = curptr->next;
        curptr = nextptr;
        prevptr = curptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = Reversek(nextptr, k);
    }
    return prevptr;
}

int main()
{
    // cout<<"Insert";
    // For displaying the linked list
    node *head;
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 5);
    InsertAtTail(head, 6);

    List(head);
    int k = 2;
    node *newhead = Reversek(head, k);
    List(newhead);
    // InsertAtHead(head, 4);
    // cout << Search(head, 3);
    // Delete(head, 2);
    // DeleteatFirst(head);
    return 0;
}
