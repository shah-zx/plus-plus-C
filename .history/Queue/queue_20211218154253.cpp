#include <iostream>
using namespace std;

#define n 100

class Queue
{
    int *arr;
    int front;
    int back;

public:
    Queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void enqueue(int x)
    {
        if (back != n - 1)
        {
            cout << "Queue overflow";
            return;
        }
        back++;
        arr[back] = x;
        if (front == -1)
        {
            front++;
        }
    }
    void dequeue(int x)
    {
        if (front==-1 && back==-1)
        {
            cout<<"Queue empty"
        }
        
    }
};

int main()
{
}