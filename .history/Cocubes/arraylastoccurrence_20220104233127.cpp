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

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num;
    cin >> num;
    int e;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == e)
        {
            count++;
        }

        if (count == num)
        {
            cout << i;
        }
    }
}