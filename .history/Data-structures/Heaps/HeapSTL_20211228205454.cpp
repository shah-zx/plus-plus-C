#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
int main()
{

    priority_queue<int, vector<int>> pq;   // This is our max Heap dewclaration 
    pq.push(1);   // done in O(log n) time
    pq.push(2);
    pq.push(3);
    pq.push(4);
    cout << pq.top() << endl;
}