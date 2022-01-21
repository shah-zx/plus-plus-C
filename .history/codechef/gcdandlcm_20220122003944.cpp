#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int GCD(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        rem = b;
    }
    return a;
}

int LCM(int a, int b)
{
    int r = (a * b) / GCD(a, b);
    return r;
}

int main()
{

    int T1;
    cin >> T1;
    int T2;
    cin >> T2;
    cout << GCD(T1, T2);
    cout << LCM(T1, T2);
    // for (int i = 0; i < T; i++)
    // {
    //     int n;
    //     cin >> n;
    // }
    return 0;
}