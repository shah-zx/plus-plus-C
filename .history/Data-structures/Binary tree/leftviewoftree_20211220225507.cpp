#include<bits/stdc++.h>
#include<stack>
#include<queue>
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

void leftView(Node *root){
    queue<Node *> q1;
    q1.push(root);
    while (!q1.empty())
    {
        int n = q1.size();
        for (int i = 0; i < n; i++)
        {
            /* code */
        }
        
    }
    
}




int main()
{
}