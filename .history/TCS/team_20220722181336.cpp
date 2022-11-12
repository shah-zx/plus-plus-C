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
    int ld = 0;
    while (n != 0)
    {
        n %= 10;
        p.push_back(n);
        
    }
    for(int i = 0; i< p.size(); i++){
        cout << p[i] << " ";
    }
}

signed main()
{
    int n;
    cin >> n;
    cout << mx(n);
}