#include <iostream>
using namespace std;

struct Node
{
public:
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

int search(int inOrder[], int start, int end, int curr)
{
    for (int i = start; i < end; i++)
    {
        if (inOrder[i] == curr)
        {
            return i;
        }
        return -1;
    }
}

Node *buildTree(int inOrder[], int PreOrder[], int start, int end)
{

    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }

    int curr = PreOrder[idx];
    idx++;
    Node *node = new Node(curr);
    if (start == NULL)
    {
        return node;
    }
    int pos = search(inOrder, start, end, curr);
    node->left = buildTree(inOrder, PreOrder, start, pos - 1);
    node->right = buildTree(inOrder, PreOrder, pos + 1, end);
}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int Inoredr[] = {4, 2, 1, 5, 3};

    return 0;
}