#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int Sum(int n)
{
    int sum = 0;
    for (int i = n; i >= 0; i++)
    {
        sum += i;
    }
    cout<<sum;
}

int_fast32_t main()
{
}