#include <iostream>
#include <queue>
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

int sumAtk(Node *root, int k)
{
    int sum = 0;
    int level = 0;
    queue<Node *> q1;
    while (!q1.empty())
    {
        Node *node = q1.front();
        q1.pop();
        if (node != NULL)
        {
            if (k == level)
            {
                sum += node->data;
            }

            if (node->left)
                q1.push(node->left);
            if (node->right)
                q1.push(node->right);
        }
        else if (!q1.empty()){
            q1.push(NULL);
        level++;}
    }
    return sum;
}

int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(7);
    root->right->left = new Node(6);
    cout<<sumAtk(root , 2);
}
