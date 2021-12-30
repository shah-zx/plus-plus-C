#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repm(i, a, b) for (int i = a; i >= b; i--)
#define ai int arr[]



void sum(int n)
{
    int sum = 0;
    while (n!=0)
    {
       int lastdigit =  n%10;
       sum += lastdigit;
       n = n/10;
    }
    
}

int_fast32_t main()
{
    int sum = 0;
    int n;
    cin >> n;
}