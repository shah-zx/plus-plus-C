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

int GCD(int a, int b)
{
    int rem = 0;
    while (b != 0)
    {
        rem += a % b;
        a = b;
        b = rem;
    }
    cout<< a;
}

signed main()
{

    int n1;
    int n2;
    cin >> n1;
    cin >> n2;
}