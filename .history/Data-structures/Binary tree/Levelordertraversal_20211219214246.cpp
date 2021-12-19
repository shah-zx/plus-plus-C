#include <iostream>
#include <queue>
using namespace std;

#define n 100

struct Node
{
public:
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

void *LevelOrderTraverse(Node *root)
{
    queue<Node *> q1;
    q1.push(root);
    q1.push(NULL);
    while (!q1.empty())
    {
        Node *node = q1.front();
        q1.pop();
        if (node != NULL)
        {
            cout << node->data;
            if (node->left)
                q1.push(node->left);
            if (node->right)
                q1.push(node->right);
        }
        else if (!q1.empty())
            q1.push(NULL);
    }
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
    LevelOrderTraverse(root);
}

