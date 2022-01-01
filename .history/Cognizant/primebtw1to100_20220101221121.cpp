#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

bool isPrime(int a)
{
    bool hai = 1;
    for (int i = 2; i*i < a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

signed main()
{
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    for (int i = n1; i <=n2; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }
}