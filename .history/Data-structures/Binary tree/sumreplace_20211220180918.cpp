#include <iostream>
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

int SumReplace(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    SumReplace(root->left);
    SumReplace(root->right);

    if (root->left != NULL)
    {
        root->data += root->left->data;
    }
    if (root->right != NULL)
    {
        root->data += root->right->data;
    }
}

void preOrder(Node * root){
    cout<<root->data;
    preOrder(root->left);
    preOrder(root->right);
}


int main()
{




}