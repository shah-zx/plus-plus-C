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

vector<Node*> Ctrees(int start , int end)
{
    vector <Node *> trees;
     for (int i = start; i <= end; i++)
     {
       vector <Node *> leftsubtrees = Ctrees(start , i-1);
       vector <Node *> rightsubtree = Ctrees(i+1 , end);
     }
     
}


int main()
{
}