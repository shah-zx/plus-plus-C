#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

class Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void Insert( Node *head , int val)
{
    Node * temp = head;
    if (head == NULL)
    {
        Insert(head , val);
    }
    while (temp->next != head)
    {
        /* code */
    }
    
    
}

int main()
{
}