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

void InsertAtTail(node* &head, int val)
{
    // Now we will make a node :
    node *n = new node(val);
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

void List(node *head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    List(head);
    cout<<"Insert";

    return 0;
}
    // For displaying the linked list
