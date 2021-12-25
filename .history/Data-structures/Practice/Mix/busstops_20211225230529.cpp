#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

class Node
{
public:
    string data;
    Node *next;
    Node(string val)
    {
        data = val;
        next = NULL;
    }
};

void Insert(Node *&head, string val)
{

    Node *temp = head;
    Node *n = new Node(val);

    if (head == NULL)
    {
        Insert(head, val);
        return;
    }
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

int Display(Node *head)
{

    Node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    Node *head = NULL;
    Insert(head, "TH");
    Insert(head, "GA");
    Insert(head, "IC");
    Insert(head, "HA");
    Insert(head, "TE");
    Insert(head, "LU");
    Insert(head, "NI");
    Insert(head, "CA");
}
// “TH”, ”GA”, ”IC”, ”HA”, ”TE”, ”LU”, ”NI”,”CA”