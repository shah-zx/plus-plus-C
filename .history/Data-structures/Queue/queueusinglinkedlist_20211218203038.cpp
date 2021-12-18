#include <bits/stdc++.h>
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
        if (front == NULL)
        {
            cout << "Queue is empty";
            return;
        }
        node *todelete = front; // As the deletion will take place from the front Only
        front = front->next;
        delete todelete;
    }
    int peek()
    {
        if (front == NULL)
        {
            cout << "There is no element in the queue";
            return -1;
        }
        return front->data;
    }
    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Queue q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    cout << q1.peek();
    // q1.dequeue();
    // cout << q1.peek();
    // q1.dequeue();
    // cout << q1.peek();
    // q1.dequeue();
    // cout << q1.peek();
}