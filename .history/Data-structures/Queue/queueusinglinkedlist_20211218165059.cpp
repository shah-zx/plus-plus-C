#include <iostream>
using namespace std;

class node
{
    int data;
    node *next;
    public:
    node(int value)
    {
        value = data;
        next = NULL;
    }

};

class Queue
{
   node * front;
   node * back;
   public:
   Queue()
   {
       front = NULL;
       back = NULL;
   }
};

int
main()
{
}