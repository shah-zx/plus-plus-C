#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

#define n 10

class queue
{
    int *arr;
    int front;
    int back;
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
};


void enqueue(int x)
{
    if (back == n-1)
    {
        cout<<"queue overflow";
    }
    if (front = = -1)
    {
        cout<<"queue underflow";
    }
    front = x;
    front++;
    
    
}


int main()
{



}