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

bool search(Node *head, int k)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == k)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void insertAttail(Node * head , int val)
{
    Node * n = new Node(val);
    Node * temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next;
    

}


signed main()
{


}