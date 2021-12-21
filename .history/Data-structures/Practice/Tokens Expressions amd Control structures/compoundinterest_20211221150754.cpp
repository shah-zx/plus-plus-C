#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

int CI(int p, int r, int n)
{
    if (n == 1)
    {
        return 1;
    }
    int res;
    CI(p, r, n - 1);

    res += p * (1 + r);
    return res;
}

int main()
{
    float principal;
    float time;
    float rate;
    cin >> principal;
    cin >> rate;
    cin >> time;
    cout << CI(principal, rate, time);
}