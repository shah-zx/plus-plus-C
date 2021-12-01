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
            cout<<"Value pushed to stack";
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
            cout <<"Item : "<< arr[i] << endl;
        }
    }
};

int main()
{

    stack s1;

    // int positon, option, value;
    // cout << "What operation do you want to Perform? select the option number and type 0 to exit..." << endl;
    // cout << "1.push()" << endl;
    // cout << "2.pop()" << endl;
    // cout << "3.change()" << endl;
    // cout << "4.count()" << endl;
    // cout << "5.clear screen()" << endl;
    // cout << "6.isFull()" << endl;
    // cout << "7.isEmpty()" << endl;
    // cout << "8.Display()" << endl;
    // cin >> option;
    // switch (option)
    // {
    //     case 1: 
    //     cout<<"Enter an item to be pushed in the stack";
    //     cin >> value; 
    //     s1.push(value);
    //     break;
        
    //     case 2: 
    //     cout<<"pop function called : "<<s1.pop(value);
    //     cin >> value; 
    //     break;
        
    // }

    // s1.push(20);
    // s1.push(30);
    // s1.push(40);
    // s1.push(50);
    // s1.push(60);
    
    s1.display();
    
    // cout<<"Hello";
    return 0;
}
