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
struct Info
{
    int max;
    int min;
    int size;
    int ans;
    bool isBST;
};

Info isBST(Node *root)
{

    if (root == NULL)
    {
        return {INT_MAX, INT_MIN, 0, 0, true};
    }
    if (root->left == NULL && root->right == NULL) 
    {
        return {INT_MAX, INT_MIN, 1,1, true};
    }
       
    
}

int main()

{
}