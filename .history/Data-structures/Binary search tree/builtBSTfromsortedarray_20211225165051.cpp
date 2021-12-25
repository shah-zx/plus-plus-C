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

Node *BSTfromArray(int arr[], int start, int end)
{
    int mid = (start + end) / 2;
    Node *root = new Node(mid);

    if (start >= end)
    {
        return NULL;
    }
    root->left = BSTfromArray(arr, start, mid - 1);
    root->right = BSTfromArray(arr, mid + 1, end);
    return root;
}

int main()

{

    int arr[] = {1,2,3};
    BSTfromArray(arr , arr[0] , 3);


}