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

void InsertAtHead(node *&head ,int val)
{
   node * n = new node(val);
   node * temp = head;
   while (temp->next != NULL)
   {
       /* code */
   }
   
}

void InsertAtTail(node *&head, int val)
{
    node * n = new node(val);
    node *temp = head;
    while (temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next  =head;
    
}

int main()
{



}