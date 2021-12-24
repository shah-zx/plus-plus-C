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

Node *Inorder(Node *root)
{
    Node *curr = root;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}

Node *Delete(Node *root, int k)
{
    if (root->data > k)
    {
        return Delete(root->right, k);
    }
    else if (root->data < k)
    {
        return Delete(root->left, k);
    }
    else
    {
        // If the root is equal to key :
        return root;
    }

    if (root->left == NULL)
    {
        Node *temp = root->right;
        free(root);
        return temp;
    }
    else if (root->right == NULL)
    {
        Node *temp = root->left;
        free(root);
        return temp;
    }
    // Case 3 when the root is having two childs :

    Node *temp = Inorder(root->right);
    root->data = temp->data;
    root->right = Delete(root, temp->data);
}

int main()
{


   


}