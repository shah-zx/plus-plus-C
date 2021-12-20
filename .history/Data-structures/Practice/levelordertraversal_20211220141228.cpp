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

Node *LevelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q1;
    q1.push(root);
    q1.push(NULL);

    while (!q1.empty())
    {
        Node *node = q1.front();
        if (node != NULL)
        {
            if (node->left)
                q1.push(node->left);
            if (node->right)
                q1.push(node->right);
        }
        else if (!q1.empty())
        {
            q1.push(NULL);
        }
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<LevelOrder(root);

}
