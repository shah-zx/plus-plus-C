#include<bits/stdc++.h>
#include<queue>
using namespace std;

struct Node
{
    int data;
    Node * left;
    Node * right;
    Node(int value) {
       data = value;
       left = NULL;
       right = NULL;
    } 
};

void RightView(Node * root)
{
    queue<Node *> q1;
    q1.push(root);
    q1.push(NULL);
    Node * node = q1.front();
    while (q1.empty())
    {
        if(node!=NULL)
        {

        }
    }
    

}









int main()
{
   
}