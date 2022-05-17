#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

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

Node *BST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val > root->data)
    {
        root->left = BST(root->left, val);
    }
    else
    {
        root->right = BST(root->right, val);
    }
    return root;
}

void Inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

signed main()
{
    Node *root = NULL;
    root = BST(root, 8);
    BST(root->left);, 1);
    BST(root, 3);
    BST(root, 4);
    BST(root, 2);
    BST(root, 7);
    Inorder(root);
    cout << endl;
}