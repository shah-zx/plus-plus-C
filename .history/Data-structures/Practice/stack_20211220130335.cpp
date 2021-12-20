#include <iostream>
using namespace std;

#define n 10

class stack
{
public:
    int *arr;
    int top;

    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout<<"stack overflow";
        }
        top = arr[x]
        top++;
    }
};

int main()
{
}