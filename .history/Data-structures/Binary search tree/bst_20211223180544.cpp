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

Node * InsertBST(Node * root , int val)
{
    if (root == NULL) 
    {
        root = val;
        return;
    }
    if (val > root->left->data)
    {
        
    }
    
}

int main()
{
}