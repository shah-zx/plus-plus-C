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
    Node *root = NULL;

    // Base condition :

    if (*preorderIdx >= n)
    {
        return NULL;
    }
    if (key > min && key < max)
    {
        root = new Node(key);
        *preorderIdx = *preorderIdx + 1;

        if (*preorderIdx < n)
        {
            root->left = BuiltBST(preOrder, preorderIdx, min, key, preOrder[*preorderIdx], n);
        }
        if (*preorderIdx < n)
        {
            root->right = BuiltBST(preOrder, preorderIdx, key, max, preOrder[*preorderIdx], n);
        }
    }
    return root;
}

int main()
{

    /*
            10
          /   \
         2    13
        /     /
       1     11
    */

    int arr[] = {10, 2, 1, 13, 11};
    int n = 5;
    int *preorderIdx = 0;
    BuiltBST(arr, &preorderIdx, INT_MIN, INT_MAX, arr[0], n);
}