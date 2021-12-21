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
        arr[back] = x;
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
    int Display()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue empty" << endl;
        }
        return arr[front];
    }
};

int main()
{

    Queue q1;
    q1.enqueue(1);
    cout << q1.Display();
    q1.enqueue(2);
    cout << q1.Display();
    q1.enqueue(3);
    cout << q1.Display();
    q1.enqueue(4);
    cout << q1.Display();
    q1.enqueue(5);
    cout << q1.Display();
}