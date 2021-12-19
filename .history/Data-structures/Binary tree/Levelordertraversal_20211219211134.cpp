#include <iostream>
#include<queue>
using namespace std;

#define n 100

struct Node
{
public:
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

// class Queue
// {
// public:
//     int * arr;
//     int front;
//     int back;
//     Queue()
//     {
//         arr = new int[n];
//         front = -1;
//         back = -1;
//     }
// };

void *LevelOrderTraverse(Node *root)
{
    queue<int> q1;
    q1.push(root);
    q1.push(NULL);


}

int main()
{
}