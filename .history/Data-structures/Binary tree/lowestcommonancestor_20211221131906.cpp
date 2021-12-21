#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

struct Node {
    int data;
    Node*left;
    Node*right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right  = NULL;
    }
};

int LCA(Node * root , int x  , int y)
{
    vector<int> q;
    if(root == NULL)
    {
        return;
    }
}



int main()
{

}