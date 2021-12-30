#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)


void merge(int arr , int mid , int l , int r)


void mergesort(int arr, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid - 1);
        mergesort(arr, mid + 1, r);
        merge(arr, mid , l, r);
    }
}

int_fast32_t main()
{
}