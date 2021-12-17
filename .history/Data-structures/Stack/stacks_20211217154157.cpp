#include <iostream>
using namespace std;

#define n 100

class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack overflow: " << endl;
        }
        top++;
        arr[top] = x;
    }
    void pop(int x)
    {
        if (top == -1)
        {
            cout << "No element to pop: " << endl;
        }
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "No element " << endl;
        }
        return arr[top];
    }
};

int main()
{
}