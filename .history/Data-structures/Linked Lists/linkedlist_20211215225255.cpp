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

int main()
{
    // cout<<"Insert";

    node *head = NULL;
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    List(head);
    InsertAtHead(head, 4);
    List(head);
    cout<<Search(head, 3);
    return 0;
}
// For displaying the linked list
