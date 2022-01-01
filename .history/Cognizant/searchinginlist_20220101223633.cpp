#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

class Node
{
    public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

int search(Node * head , int k)
{
   if(k == head)
   {
       return head->data;
   }
   Node * temp = head;
   while (temp->next != NULL)
   {

       temp = temp->next;
   }
   
}

signed main()
{
}