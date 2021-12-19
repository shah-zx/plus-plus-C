#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *node;
    Node *right;
    Node *left;
    Node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};



int search(int inOrder[] , int start , int end , int curr)
{
    for (int i = start; i <=end; i++)
    {
        if(inOrder[i] == curr)
        {
          return i;
        }
    }
    return -1;
}

Node * buildTree(int inOrder[] , int PostOrder[] , int start , int end)
{
    int n = sizeof(PostOrder)/sizeof(PostOrder[0]);
    static int idx = PostOrder[n-1];
    int curr = PostOrder[idx];
    idx++;
    Node * node = new Node(curr);
    if(start==end)
    {
        return node;
    }
    int pos = search(inOrder , start , end , curr);
    node->left = buildTree(inOrder , PostOrder);
    node->right = buildTree(inOrder , PostOrder);
    return node;

}

int main()
{
}