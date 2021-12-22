#include <bits/stdc++.h>
#include <stack>
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

int LCA(Node *root, int n1, int n2)
{
    vector<int> path1, path2;
    if (root->data != NULL)
    {
    }
    if (!getPath(root, n1, path) || !getPath(root, n2, path))
    {
        return -1;
    }
    int pc;
    for (int pc = 0; pc < path.size(); pc++)
    {
        if (path1[pc] != path2[pc])
        {
            break;
        }
    }
    return path1[pc-1]
}

int main()
{
}