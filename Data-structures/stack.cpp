#include <iostream>
using namespace std;

class stack
{
private:
    int top;
    int arr[5];

public:
    stack() // constructor //
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0; // Initally the stack will be full of 0 //
        }
    }

    bool isEmpty() // returns true if top = -1
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    bool isFull() // returns true if the stack is full //
    {
        if (top == 4)
            return true;
        else
            return false;
    }
    void push(int value)
    { // will push the values into the array //
        if (isFull())
        {
            cout << "Stack overflow";
        }
        else
        {
            top++; // We did this because initially the value of top was -1 and by doing so it becomes 0 //
            arr[top] = value;
        }
    }
    int pop(int value)
    {
        if (isEmpty())
        {
            cout << "The stack is empty";
            return 0;
        }
        else
        {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return 0;
        }
    }
    int count(int arr[])
    {
        return (top + 1);
    }
    int peek(int pos)
    {
        if (isEmpty())
        {
            cout << "Stack underflow !!";
        }
        else
        {
            return arr[pos]; // This will give the number present at this position //
        }
    }
    void change(int pos, int value)
    {
        arr[pos] = value;
        cout << "Item changed at the loaction" << pos << " " << value << endl;
    }
    void display()
    {
        for (int i = 4; i <= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    stack s1;
    s1.push(100);
    s1.push(200);
    s1.push(300);
    s1.push(400);
    // s1.push(500);
    s1.display();
    // cout<<"Hello";
    return 0;
}
