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
}

Node *
BST(Node *root, int k)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == k)
    {
        return root;
    }

    if (val < root->data)
    {
        return BST(root->left, k)
    }
    else
    {
        return BST(root->right, k)
    }
}

int main()
{
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    if (BST(root, 5) == NULL)
    {
        cout << "Key doesn't exist'";
    }
    else
    {
        cout << "Key exists";
    }
}
