#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

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

void Insert(Node *head, int val)
{
    Node *temp = head;
    Node * n = new Node(val);

    if (head == NULL)
    {
        Insert(head, val);
    }
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

int main()
{
}