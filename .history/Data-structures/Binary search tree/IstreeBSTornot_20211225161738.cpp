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

bool isBST(Node *root, Node *min, Node *max)
{
    // Base condition :

    if (root == NULL)
    {
        return true;
    }
    if (min != NULL && root->data < min->data)
    {
        return false;
    }
    if (max != NULL && root->data > max->data)
    {
        return false;
    }

    bool leftValid = isBST(root->left, min, root);
    bool rigthValid = isBST(root->right, root, max);
    return leftValid and rigthValid;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    if (isBST(root, NULL, NULL))
    {
        cout << "Valid BST";
    }
    else
    {
        cout << "Not valid BST";
    }
}