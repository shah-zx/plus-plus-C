#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_set>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

bool isPrime(int n)
{
    bool hai = 1;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            hai = 1;
        }
        else if (hai == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

signed main()
{

    int n;
    cin >> n;
    // vi a(n);
    // rep(i, 0, n)
    // {
    //     cin >> a[i];
    // }
    isPrime(n);
}