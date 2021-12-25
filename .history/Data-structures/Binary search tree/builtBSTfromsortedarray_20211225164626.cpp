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
    }
};

int BSTfromArray(Node *root, int start, int end)
{
    int mid = (start + end) / 2;
    Node * root = new Node(mid);

    if (start >= end)
    {
        return NULL;
    }
    root->left = BSTfromArray(root, start , mid-1 );
    root->right = BSTfromArray(root)
    
}

int main()

{
}