#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

int CI(int p, int r, int n)
{
    int res = 0;
    p *(1 + r);
    res += CI(p, r, n);
    return res;
}

int main()
{
    int principal;
    int time;
    float rate;
    cin >> principal;
    cin >> rate;
    cin >> time;
    cout<<CI(principal, rate, time);
    cout<<"Hello";
}