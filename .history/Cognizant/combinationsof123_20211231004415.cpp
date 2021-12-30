#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

void Permutations(int arr[], int pos)
{
    for (int i = pos; i < arr.length(); i++)
    {
        swap(arr[i], pos);

    }
}

int_fast32_t main()
{
}