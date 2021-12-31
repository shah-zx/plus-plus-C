#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

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

void getVerticalOrder(Node *root , int hdis ,  map <int , vi> &m)
{
         if (root == NULL) 
         {
             return;
         }
         m[hdis].push_back(root->data);
         getVerticalOrder(root, hdis-1 , m);
         getVerticalOrder(root, hdis+1 , m);
}



int_fast32_t main()
{
   Node * root = new Node(10);
   root->left = new Node(7);
   root->right = new Node(4);
   root->left->left = new Node(3);
   root->left->right = new Node(11);
   root->right->left = new Node(14);
   root->right->right = new Node(6);
   
   map<int , vi> m;
   int hdis = 0;


}