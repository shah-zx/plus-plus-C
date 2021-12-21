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

bool getPath(Node *root , int k , vector<int> &path )
{
     path.push_back(root->data);

}

int LCA(Node *root, int n1, int n2)
{
    vector<int> path;
    if (!getPath(root, k, path1) || !getPath(root, k, path2))
    {
        return -1;
    }
    int pc;
    for (pc = 0; pc < path1.size(); pc++)
    {
        if (path1[pc] != path2[pc])
        {
            break;
        }
    }
    return path1[pc];
}

int main()
{
}