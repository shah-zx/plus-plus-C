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
    static int idx = PostOrder[4];
    int curr = PostOrder[idx];
    idx--;
    Node * node = new Node(curr);
    if(start==end)
    {
        return node;
    }
    int pos = search(inOrder , start , end , curr);
    node->right = buildTree(inOrder , PostOrder , pos+1 , n);
    node->left = buildTree(inOrder , PostOrder , start , pos-1);
    return node;

}

int main()
{
}