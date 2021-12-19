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

Node *buildTree(int inOrder[], int PreOrder[], int start, int end)
{

  static int idx = 0;
  int curr = PreOrder[idx];
  idx++;
  Node * root = new Node(curr);
  if (start==NULL)
  {
      return;
  }
  
  


}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int Inoredr[] = {4, 2, 1, 5, 3};

    return 0;
}