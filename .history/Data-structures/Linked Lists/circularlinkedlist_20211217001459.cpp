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

void InsertAtTail(node *&head, int val)
{
    node *temp = head;
    while (temp!=NULL)
    {
        temp = temp->next;
    }
    
}

int main()
{
}