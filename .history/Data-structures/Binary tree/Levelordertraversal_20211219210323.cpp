#include <iostream>
using namespace std;

#define n 100

struct Node
{
public:
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

class Queue
{
public:
    int * arr;
    int front;
    int back;
    Queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
};

void *LevelOrderTraverse(Node *root)
{

}

int main()
{
}