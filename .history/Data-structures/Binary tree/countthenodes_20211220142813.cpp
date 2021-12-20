#include <bits/stdc++.h>
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

int countNodes(Node * root)
{
    if(root == NULL)
    {
        return 0;
    }
    countNodes(root->left) + countNodes(root->right) + 1;
}




int main()
{
}