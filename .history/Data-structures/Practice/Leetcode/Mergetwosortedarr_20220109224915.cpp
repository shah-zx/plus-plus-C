#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
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

Node *MergeSort(Node *&head1, Node *&head2)
{

    Node *p1 = head1; // p1 is the pointer to linked lsit 1
    Node *p2 = head2; // p2 is the pointer to linked lsit 2

    Node *dn = new Node(-1);
    Node *p3 = dn; // This is the pointer to linked lsit two be made

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dn->next;
}

void InsertAtTail(Node *&head, int val)
{
    Node *temp = head;
    Node *n = new Node(val);
    while (temp != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

int Display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }
    
}

signed main()
{

    int arr1[] = {1, 2, 4};
    Node *head1 = NULL;
    Node *head2 = NULL;
    int arr2[] = {1, 3, 4};
    for (int i = 0; i < 3; i++)
    {
        InsertAtTail(head1, arr1[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        InsertAtTail(head1, arr2[i]);
    }
}
