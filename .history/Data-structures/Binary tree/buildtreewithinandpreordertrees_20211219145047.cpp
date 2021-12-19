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

void buildTree(int inOrder[] , int PreOrder[], Node * start , Node * end)
{

}

int main()
{
    int preorder[] = {1,2,4,3,5};
    int Inoredr[] = {4,2,1,5,3};

    return 0;
}