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
        return true;
    }
    if (isBalanced(root->right))
    {
        return true;
    }
    int lhieght = Hieght(root->left);
    int rhieght = Hieght(root->right);
    if (abs(lhieght - rhieght) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{




}