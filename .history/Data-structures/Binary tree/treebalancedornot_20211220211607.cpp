#include <bits/stdc++.h>
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


bool isBalanced(Node * root)
{
   if(root == NULL)
   {
       return true;
   }
   if(isBalanced(root->left))
   {
       return true;
   }
   if (isBalanced(root->right))
   {
       return true;
   }
   
}



int
main()
{
}