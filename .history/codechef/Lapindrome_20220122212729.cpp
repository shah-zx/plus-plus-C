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
        unordered_map<char, int> mp;
        unordered_map<char, int> np;
        int mid = s.size() / 2;
        if (s.size() % 2 != 0)
        {
            for (int i = 0; i < mid; i++)
            {
                int k = s[i];
                mp[k]++;
            }
            for (int j = mid + 1; j < s.size(); j++)
            {
                int e = s[j];
                np[e]++;
            }
            if (mp == np)
            {
                cout << "Yes";
            }
            else
            {
                cout << "No";
            }
        }
        else
        {
            for (auto y : mp)
            {
                for (auto e : np)
                {
                    int k = s[i];

                    if (y.second == e.second)
                    {
                        cout << "Yes";
                    }
                    else
                    {
                        cout << "No";
                    }
                }
            }
        }
    }

}
    // for (auto y : mp)
    //         {
    //             cout << y.first << " " << y.second << endl;
    //         }
    //         for (auto w : np)
    //         {
    //             cout << w.first << " " << w.second << endl;
    //         }
    //         }