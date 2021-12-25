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
    }
};

int  BSTfromArray(Node *root, int start, int end)
{
    int mid = (start + end) / 2;
    if (start >= end)
    {
        return NULL;
    }

}

int main()

{
}