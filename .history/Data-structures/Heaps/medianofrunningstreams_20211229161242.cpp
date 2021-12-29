#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

priority_queue<int, vi> pqmax;
priority_queue<int, vi, greater<int>> pqmin;

void Insert(int x)
{
    if (pqmax.size() == 0)  // base case 
    {
        pqmax.push(x);
        return;
    }
    if (x < pqmax.top())
    {
        pqmax.push(x);
    }
    else
    {
        pqmin.push(x);
    }
}

int_fast32_t main()
{



}