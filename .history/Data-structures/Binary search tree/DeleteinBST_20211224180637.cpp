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

Node * Delete(Node * root , int k)
{
    if (root->data > k)
    {
        return Delete(root->left , k);
    }
    else if (root->data < k)
    {
        return Delete(root->left , k);
    }
    
}


int main()
{
}