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

bool getPath(Node *root , int k , vector <int> &path)
{
    path.push_back(root->data);
    if (root->data == k)
    {
        return true;
    }
    if (getPath(root->left , k , path) || getPath(root->right , k , path))
    {
        return true;
    }
    path.pop_back();
    return false;
    

}

int LCA(Node *root, int n1, int n2)
{
    vector<int> path1, path2;
    if (root == NULL)
    {
        return;
    }
    if (!getPath(root, n1, path1) || !getPath(root, n2, path2))
    {
        return -1;
    }
    int pc;
    for (pc = 0; pc < path1.size() && pc < path2.size(); pc++)
    {
        if (path1[pc] != path2[pc])
        {
            break;
        }
    }
    return path1[pc-1];
}

int main()
{
}