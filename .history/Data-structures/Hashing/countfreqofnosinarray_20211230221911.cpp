#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
int_fast32_t main()
{

    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        freq[a[i]++]; // Increasing the frequency of elelment found
    }
    map<int, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
}