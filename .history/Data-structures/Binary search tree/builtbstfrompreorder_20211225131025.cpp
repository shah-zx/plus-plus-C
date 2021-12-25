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

Node *BuiltBST(int preOrder[], int *preorderIdx, int min, int max, int key, int n)
{
    if (key > min && key < max)
    {
        Node *root = NULL;
        root = new Node(key);
        *preorderIdx = *preorderIdx + 1;
    
    if (*preorderIdx < n)
    {
        root->left = BuiltBST(preOrder , preorderIdx , min , key , preOrder[*preorderIdx] ,  n);
    }
    if (*preorderIdx < n)
    {
        root->right = BuiltBST(preOrder , preorderIdx , key , max , preOrder[*preorderIdx] , n);
    }
    
    }
}

int main()
{
}