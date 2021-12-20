#include <bits/stdc++.h>
#include <queue>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

void RightView(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q1;
    q1.push(root);
    while (q1.empty())
    {
        int n = q1.size();
        Node *node = q1.front();
        q1.pop();
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                cout <<node->data;
            }
        }
    }
}

int main()
{
}