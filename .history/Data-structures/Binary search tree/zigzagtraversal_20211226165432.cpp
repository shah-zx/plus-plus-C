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

void ZigZag(Node *root)
{
    stack<Node *> currL;
    stack<Node *> nextL;
    bool leftToRight = true;   // Initially we will traverse left to right
    currL.push(root);

    if (root == NULL)
    {
        return;
    }

    while (!currL.empty())
    {
        Node *temp = currL.top();
        currL.pop();
        if (temp)
        {
            cout << temp->data << " ";

            if (leftToRight)
            {
                if (temp->left)
                {
                    nextL.push(temp->left);
                }
                if (temp->right)
                {
                    nextL.push(temp->right);
                }
            }
            else
            {
                if (temp->right)
                {
                    nextL.push(temp->right);
                }
                if (temp->left)
                {
                    nextL.push(temp->left);
                }
            }
        }
        if (currL.empty())
        {
            leftToRight != leftToRight;
            swap(currL, nextL);
        }
    }
}

int main()
{

    Node *root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(10);

    ZigZag(root);
}