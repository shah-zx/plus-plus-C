#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int_fast32_t main()
{
    priority_queue<int, vector<int>> pq; // This is our max Heap declaration
    pq.push(1);                          // done in O(log n) time
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.pop();
    cout << pq.top() << endl;

    // This will be our minHeap :

    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(2);
    pq1.push(1);
    pq1.push(3);
    cout << pq1.top() << endl;

}