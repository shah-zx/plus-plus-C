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

// fucntion for max
int mx(int n)
{
    vector<int> p;
    while (n != 0)
    {
        n %= 10;
        p.push_back(n);
        n /= 10;
    }
    for(int i = 0; i< p.size(); i++){
        cout << it.first << endl;
    }
}

signed main()
{
    int n;
    cin >> n;
    cout << mx(n);
}