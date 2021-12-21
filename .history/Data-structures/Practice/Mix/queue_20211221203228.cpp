#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

#define n 10

class Queue
{
public:
    int *arr;
    int front;
    int back;
    Queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void enqueue(int x)
    {
        if (back == n - 1)
        {
            cout << "queue overflow";
        }
        back++;
        back = arr[x];
        if (front == -1)
        {
            front++;
        }
    }
    void dequeue()
    {
        if (front == -1 || front > back)
        {
            cout << "queue empty";
        }
        front++;
    }
    void Display()
    {
        if (front == -1 || front > back)
        {
            cout<<"Queue empty"<<endl;
        }
        
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



}