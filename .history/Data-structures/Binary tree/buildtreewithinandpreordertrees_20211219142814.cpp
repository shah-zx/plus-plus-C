#include <iostream>
using namespace std;

struct Node
{

    int data;
    Node *right;
    Node *left;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int
main()
{
}