#include<iostream>
using namespace std;

#define n 100

class Queue{
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
       if (back!=n-1)
       {
           back++;
           arr[back] = x;
       }
       
    }

};


int main()
{

}