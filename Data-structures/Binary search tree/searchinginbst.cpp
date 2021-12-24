#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;


Node *BST(Node *root, int k)
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



}
