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
        Node *node = q1.front();
        q1.pop();
        int n = q1.size();
        for (int i = 0; i < n; i++)
        {
            if (i==1)
            {
                cout<< node->data;
            }
            
        }
        
    }
    
}




int main()
{
}