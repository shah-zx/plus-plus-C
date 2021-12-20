#include <iostream>
using namespace std;

#define n 100


class Node
{
public:
    int data;
    Node *next;
    int *arr[];
    Node(int val)
    {
        data = val;
        next = NULL;
        arr = new int[n];
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
    temp->next = n;

    
}

int main()
{
}