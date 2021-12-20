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



void Insert(Node *&head , int val)
{
    Node* temp = head;
    Node * n = new Node(val);
    while (temp!=NULL)
    {
        temp = temp->next;
    }
    
    
}

int main()
{
}