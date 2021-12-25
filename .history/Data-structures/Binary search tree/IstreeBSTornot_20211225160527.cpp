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
    if(root == NULL)
    {
        return true;
    }
    if (min!= NULL && root->data <min->data) 
    {
        return false;
    }
    if(max!= NULL && root->data >max->data)
    {
        return false;
    }

    
}

int main()
{
}