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
}

void InsertElement(node *head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        head == n;
    }
    node * temp = head;
    while (temp->next!= NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    
}

void display(node * &head)
{
    node * temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
    }
    
}

int main()
{
}