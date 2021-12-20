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

void InsertAtTail(Node * &head , int x)
{
    Node *n  = new Node(val);
    if (head==NULL)
    {
        head = n;
        return;
    }
    Node * temp = head;
    while (temp->next != NULL)
    {
        
    }
    
    

}




int main()
{
}