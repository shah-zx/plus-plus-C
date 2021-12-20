#include <bits/stdc++.h>
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

int Hieght(Node *root)
{
    int l = Hieght(root->left);
    int r = Hieght(root->right);
    return max(l, r) + 1;
}

bool isBalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (isBalanced(root->left) == false)
    {
        return false;
    }
    if (isBalanced(root->right) == false)
    {
        return false;
    }
    int lhieght = Hieght(root->left);
    int rhieght = Hieght(root->right);
    if (abs(lhieght - rhieght) <= 1)
    {
        return true;
    }else {
        return false;
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

    cout<<isBalanced(root);
}