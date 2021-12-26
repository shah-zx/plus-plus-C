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

vector<Node *> Ctrees(int start, int end)
{
    vector<Node *> trees;
    if (start > end)
    {
        trees.push_back(NULL);
        return trees;
    }

    for (int i = start; i <= end; i++)
    {
        vector<Node *> leftsubtrees = Ctrees(start, i - 1);
        vector<Node *> rightsubtree = Ctrees(i + 1, end);
        for (int j = 0; j < leftsubtrees.size(); j++)
        {
            Node *left = leftsubtrees[j];
            for (int k = 0; k < rightsubtree.size(); k++)
            {
                Node *right = rightsubtree[k];
                Node *node = new Node(i);
                node->left = left;
                node->right = right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}

void PreOrder(Node *root)
{
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

int main()
{

vector <Node *> trees = Ctrees(1,3);
for (int i = 0; i < 3; i++)
{
    cout<<PreOrder(trees)
}


}