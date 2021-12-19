#include <iostream>
using namespace std;

struct Node
{
    public :
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Queue{
    public :
    int data;
    int front;
    int back;
    Queue(int val){
    data = val;
    front = NULL;
    back = NULL;
    } 
};



void * LevelOrderTraverse(Node * root)
{
      
}

int main()
{
}