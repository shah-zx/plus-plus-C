#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
#include <unordered_set>
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
    int num;
    cin >> num;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            cout << "found";
        }
    }
}
