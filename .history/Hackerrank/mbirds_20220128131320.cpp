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
    int arr[n];
    int counto = 0;
    int countt = 0;
    int countth = 0;
    int countf = 0;
    int countfi = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int k = arr[i];
        m[k]++;
    }
    for (auto i : m)
    {
        if (i.first >= 1 && i.first <= 5)
        {
            if (i.first == 1)
            {
                counto = i.second;
            }
            else if (i.first == 2)
            {
                countt = i.second;
            }
            else if (i.first == 3)
            {
                countth = i.second;
            }
            else if (i.first == 4)
            {
                countf = i.second;
            }
            else if (i.first == 5)
            {
                countfi = i.second;
            }
            else
            {
                return;
            }
        }
    }
    cout << counto << " " << countt << " " << countth << " " << countf << " " << countfi;
}