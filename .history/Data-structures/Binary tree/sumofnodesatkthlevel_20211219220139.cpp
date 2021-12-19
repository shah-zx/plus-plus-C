#include <iostream>
#include <queue>
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

int sumAtk(Node *root, int k)
{
    int sum = 0;
    int level = 0;
    queue<Node *> q1;
    while (!q1.empty())
    {
        Node *node = q1.front();
        q1.pop();
        if (node != NULL)
        {
            if (k==level)
            {
                sum+=node->data;
            }
            

            if (node->left)
                q1.push(node->left);
            if (node->right)
                q1.push(node->right);
        }
        else if (!q1.empty())
            q1.push(NULL);
            level++;
    }
}

int main()
{
}