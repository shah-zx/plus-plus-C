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
    while (q1.empty())
    {
        int n = q1.size();
        Node *node = q1.front();
        q1.pop();
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
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
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
}