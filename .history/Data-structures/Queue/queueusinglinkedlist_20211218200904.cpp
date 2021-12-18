#include <iostream>
using namespace std;

class node
{
    public:

    int data;
    node *next;
    node(int value)
    {
        value = data;
        next = NULL;
    }

};

class Queue
{
   public:

   node * front;
   node * back;
   Queue()
   {
       front = NULL;
       back = NULL;
   }
   void enqueue(int x)
   {
       if (front == NULL)
       {
           front = n;
           back = n;
       }
       
      node * n = new node(x);
      back->next = n;
      back = n;
      

   }
};

int
main()
{
}