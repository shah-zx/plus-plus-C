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

void InsertatTail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void Display(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

int Length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

signed main()
{

    Node *head1 = NULL;
    InsertatTail(head1, 2);
    InsertatTail(head1, 4);
    InsertatTail(head1, 3);
    Display(head1);
    cout << endl;
    Node *head2 = NULL;
    InsertatTail(head2, 5);
    InsertatTail(head2, 6);
    InsertatTail(head2, 4);
    Display(head2);
    for (int i = 0; i < Length(head1); i++)
    {
        for (int i = 0; i < Length(head2); i++)
        {
            Node * temp1 = head1;
            Node * temp2 = head2;
            temp1->data + temp2->data;
        }
        
    }
    
}
