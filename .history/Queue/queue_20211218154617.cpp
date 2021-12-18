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
    void dequeue(int pos)
    {
        if (front==-1 && front>back)
        {
            cout<<"Queue empty";
            return;
        }
        front++;
        
        


        
    }
};

int main()
{
}