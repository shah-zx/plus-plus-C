#include <bits/stdc++.h>
#include <queue>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void RightView(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    
    queue<Node *> q1;
    q1.push(root);
    Node *node = q1.front();
    while (q1.empty())
    {
        int n = q1.size();
        for (int i = 0; i < n; i++)
        {
            /* code */
        }
        
        if (node != NULL)
        {
            if (root->left)
                q1.push(root->left);
            if (root->right)
                q1.push(root->right);
        }
        else if (!q1.empty())
        {
            q1.push(NULL);
        }
    }
}

int main()
{
}