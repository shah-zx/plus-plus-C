#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
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

void LevelOrderTraverse(Node *root)
{
    queue<Node *> q1;
    q1.push(root);
    q1.push(NULL);
    while (!q1.empty())
    {
        Node *node = q1.front();
        q1.pop();
        if (node != NULL)
        {
          cout<<node->data;
        }
        if (node->left)
            q1.push(root->left);
        if (root->right)
            q1.push(root->right);
        else if (!q1.empty())
        {
            q1.push(NULL);
        }
    }
}

int main() {}