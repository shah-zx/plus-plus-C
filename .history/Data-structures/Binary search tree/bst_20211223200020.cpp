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

Node *InsertBST(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = InsertBST(root->left, val);
    }
    else // If the value is greater than the root ka data
    {
        root->right = InsertBST(root->right, val);
    }
    return root;
}

void InOrder(Node *root)
{
     if (root==NULL)
     {
         return;
     }
     
}



int main()
{

    Node *root = NULL;
    root = InsertBST(root, 5);
    InsertBST(root, 1);
    InsertBST(root, 3);
    InsertBST(root, 4);
    InsertBST(root, 2);
    InsertBST(root, 7);

}
