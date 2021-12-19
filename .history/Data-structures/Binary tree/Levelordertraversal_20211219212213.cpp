#include <iostream>
#include <queue>
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

// class Queue
// {
// public:
//     int * arr;
//     int front;
//     int back;
//     Queue()
//     {
//         arr = new int[n];
//         front = -1;
//         back = -1;
//     }
// };

void *LevelOrderTraverse(Node *root)
{
    queue<Node *> q1;
    q1.push(root);
    q1.push(NULL);
    while (!q1.empty())
    {
        Node *node = q1.front();
        if (node != NULL)
        {
            cout << node->data;
            if (node->left)
                q1.push(node->left);
            if (node->right)
                q1.push(node->right);
        }
        else if(!q1.empty())
        {
           q1.push(NULL);
        }
    }
}

int main()
{
}