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
    
}



int Diameter(Node *root)
{

}



int main()
{
}