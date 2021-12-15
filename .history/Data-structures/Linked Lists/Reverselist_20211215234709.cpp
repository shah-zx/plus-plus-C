#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }

};


node* Reverse(node * head)
{
   node * prevptr = NULL;
   node * crtptr = head;
   node * nextptr;
   while (crtptr != NULL) 
   {
       nextptr->next = crtptr->next;
       crtptr->next = prevptr;
       prevptr = crtptr;
       crtptr = nextptr;
   }
   
}


int main()
{

}