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

    // Outr edge case :

    if (head == NULL)
    {
        InsertAtHead(head, val);
        return;
    }

    node *n = new node(val);
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void DisplayDLinkedList(node* & head)
{

}

int main()
{
}
