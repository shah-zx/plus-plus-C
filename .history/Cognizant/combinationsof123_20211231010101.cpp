#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

void Permutations(int arr[], int pos)
{
    vi a(n);
    if (pos == a.size()) 
    {
        a.push_back(a);
    }
    
    for (int i = pos; i < 3; i++)
    {
        swap(a[i], pos);
        Permutations(a, pos + 1);
        swap(a[i], pos);
    }
}

int_fast32_t main()
{
}