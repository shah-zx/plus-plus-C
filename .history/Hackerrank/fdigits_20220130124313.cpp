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

int Dig(int n)
{
    vector<int> v;
    int ld = n % 10;
    v.push_back(ld);
    n /= 10;
    cout << ld << " ";
}

signed main()
{
    int T;
    cin >> T;
    Dig(T);

    // while (T--)
    // {

    //     int n;
    //     cin >> n;

    // }
}