#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

void Permutations(int arr[], int pos , int n)
{
    vi a(n);
    if (pos == a.size()) 
    {
        
    }
    
    for (int i = pos; i < 3; i++)
    {
        swap(arr[i], pos);
        Permutations(arr, pos + 1);
        swap(arr[i], pos);
    }
}

int_fast32_t main()
{
}