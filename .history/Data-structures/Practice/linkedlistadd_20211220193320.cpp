#include <iostream>
using namespace std;

#define n 100


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



void Insert(Node *&head , int val)
{
    Node * n1 = new Node(val);

    if (head==NULL)
    {
        head = n1;
        return;
    }
     
    Node* temp = head;
    while (temp!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n1;

    
}

int main()
{
}