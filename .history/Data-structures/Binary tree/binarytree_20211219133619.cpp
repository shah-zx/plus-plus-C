#include <bits/stdc++.h>
using namespace std;

struct Node
{

    int data; 
    struct Node *right;
    struct Node *left;

    Node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
void preOrder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void InOrder(struct Node *root)
{
    if(root==NULL)
    {
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

void PostOrder(struct Node *root)
{
    if(root==NULL)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // preOrder(root);
    // InOrder(root);
    PostOrder(root);

}

