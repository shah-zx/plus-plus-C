#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int Hieght(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lhieght = Hieght(root->left);
    int rhieght = Hieght(root->right);
    return lhieght + rhieght + 1;
    
}



int Diameter(Node *root)
{
    
    if (root == NULL)
    {
        return 0;
    }
    
}



int main()
{
}