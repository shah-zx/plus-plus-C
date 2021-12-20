#include <iostream>
#include<queue>
using namespace std;

struct Node
{
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

void LevelOrder(Node * root)
{
   queue<Node *> q1;
   q1.push(root);
   q1.push(NULL);
}



int main()
{
}