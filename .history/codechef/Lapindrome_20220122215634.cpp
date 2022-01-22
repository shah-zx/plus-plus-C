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
signed main()
{

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int hash[26];
        int mid = s.size() / 2;
        int n = s.size();
        // For first half
        bool lap = true;
        for (int i = 0; i < mid; i++)
        {
            int k = s[i] - 'a';
            hash[k]++;
        }
        if (n % 2 != 0)
            mid += 1;
        // For second half
        for (int i = mid; i < n; i++)
        {
            int m = s[i] - 'a';
            hash[m]--;
        }
        for (int j = 0; j < 26; j++)
        {
            if (hash[j] != 0)
            {
                lap = false;
                break;
            }
        }
        if (lap)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
