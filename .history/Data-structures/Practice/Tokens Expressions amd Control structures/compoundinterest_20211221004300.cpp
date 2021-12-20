#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

int CI(int p, int r, int n)
{
    p *(1 + r);
    cout<< CI(p, r, n);
}

int main()
{
    int principal;
    cout << "Enter the principal value";
    cin >> principal;
    float rate;
    cout << "Enter the rate";
    cin >> rate;
    int time;
    cout << "Enter the time";
    cin >> time;
    cout << CI(principal, rate, time);
}