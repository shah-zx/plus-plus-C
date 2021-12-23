#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

struct Node {
    int data;
    Node * left;
    Node * right;
    Node(int val)
    {
      data = val;
      left = NULL;
      right = NULL;
    }
};


void LevelOrderTraverse(Node *root)
{
     queue<Node *> q1;
     while (!q1.empty())
     {
         if (root->data!= NULL)
         {
             q1.push(root->data);
         }
         
     }
     
}

int main(){}