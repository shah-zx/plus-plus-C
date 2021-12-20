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

int Hieght(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lhieght = Hieght(root->left);
    int rhieght = Hieght(root->right);
    return max(lhieght, rhieght) + 1;
}

int main()
{
    Node *root = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << Hieght(root);
}