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

    // int arr[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    // int n = 26;

    // int nos[n];
    // for (int i = 1; i <= n; i++)
    // {
    //     cin >> nos[i];
    // }
    string s;
    cin >> s;
    int q = s.size();
    // This is the code for making the string gp into a vector

    // vector<char> v(s.begin(), s.end());
    // vector<int> u; // This is for storing the indexes
    // vector<int> z; // This will contain the number from the nos array given
    // for (int i = 1; i <= 26; i++)
    // {
    //     for (auto j : v)
    //     {
    //         if (arr[i] == j)
    //         {
    //             u.push_back(i);
    //         }
    //     }
    // }

    // for (int i = 1; i <= 26; i++)
    // {
    //     for (auto k : u)
    //     {
    //         if (i == k)
    //         {
    //             z.push_back(nos[i]);
    //         }
    //     }
    // }

    // int h = *max_element(z.begin(), z.end());
    cout << q;
}
