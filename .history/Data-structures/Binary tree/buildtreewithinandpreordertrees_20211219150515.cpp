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


int search(int inOrder[] , int start , int end , int curr )
{
    for (int i = start; i < end ; i++)
    {
        if (inOrder[i] == curr)
        {
            return i;
        }
        
    }
    
}


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
  int pos = search(inOrder , start, end , curr);
  Node->left = buildTree(inOrder, PreOrder,idx,pos-1);

  


}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int Inoredr[] = {4, 2, 1, 5, 3};

    return 0;
}