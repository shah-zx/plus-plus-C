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

void Insertinlist(node * &head , int val)
{
    node * n = new node(val);
    node * temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;

    
}



int main()
{
}