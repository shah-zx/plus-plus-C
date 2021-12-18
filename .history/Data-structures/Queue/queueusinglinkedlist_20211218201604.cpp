#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int value)
    {
        value = data;
        next = NULL;
    }
};

class Queue
{
public:
    node *front;
    node *back;
    Queue()
    {
        front = NULL;
        back = NULL;
    }
    void enqueue(int x)
    {
        node *n = new node(x);
        if (front == NULL)
        {
            front = n;
            back = n;
            return;
        }

        back->next = n;
        back = n;
    }
    void dequeue()
    {
        if (front==NULL && back==NULL)
        {
            cout<<"Queue is empty"
        }
        
    }

};

int main()
{

}