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
    Node * n = new Node(val);
    Node * temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void Delete(Node *&head , int val)
{
        Node * temp = head;
        while (temp->next->data != val)
        {
            temp = temp->next;
        }
        Node * todelete = temp->next;
        temp->next = temp->next->next;
        delete todelete;
        
}

void Display(Node *head)
{
    Node *temp = head
}


int main()
{



}