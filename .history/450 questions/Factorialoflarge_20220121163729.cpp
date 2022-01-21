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

vector<int> Fact(int n)
{
    vector<int> res;
    res.push_back(1);
    for (int x = 2; x < n; x++)
    {
        int carry = 0;
        for (int i = n; i < res.size(); i++)
        {
            int val = res[i] * x + carry;
            res[i] = val % 10;
            carry = val / 10;
        }
        while (carry != 0)
        {
            res.push_back(carry % 10);
            carry /= 10;
        }
    }  reverse(res.begin(), res.end());
    for (auto i : res)
    {
        cout << *res<<" ";
    }
    
}

signed main()
{

    int n;
    cin >> n;
    Fact(n);
}