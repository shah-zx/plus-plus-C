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

Node *BuiltBST(int preOrder[], int *preorderIdx, int min, int max, int key, int n)
{
     if (key < min && key > max)
     {

         root = new Node(key);
         *preorderIdx = *preOrderIdx + 1;
     }
     
}







int main()
{
}