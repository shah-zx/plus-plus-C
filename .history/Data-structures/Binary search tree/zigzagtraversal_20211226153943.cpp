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
    bool leftToRight;
    currL.push(root);

    while (!currL.empty())
    {
        Node *temp = currL.top();
        currL.pop();
        if (temp)
        {
            cout<<temp->data<<" ";
        }
        if (leftToRight)
        {
            if(temp->left)
            {
                nextL.push(temp->left);
            }
        }
        
    }
}

int main()
{
}