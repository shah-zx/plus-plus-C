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

}









int main()
{
   
}