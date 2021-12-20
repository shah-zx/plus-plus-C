#include <bits/stdc++.h>
#include <stack>
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

void leftView(Node *root)
{
    queue<Node *> q1;
    q1.push(root);
    while (!q1.empty())
    {
        Node *node = q1.front();
        q1.pop();
        int n = q1.size();
        for (int i = 0; i < n; i++)
        {
            if (i == 1)
            {
                cout << node->data;
            }
            if (node->left != NULL)
            {
                q1.push(node->left);
            }
            if (node->right != NULL)
            {
                q1.push(node->right);
            }
        }
    }
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    leftView(root);
}