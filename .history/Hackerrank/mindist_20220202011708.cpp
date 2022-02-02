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

int Rem(int arr[], int n)
{
    int s = arr[0];
    int e = arr[n - 1];
    while (s < e)
    {
        if (s == e)
        {
            return s;
        }
        s++;
        e--;
    }
}

signed main()
{
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                v.push_back(abs(j - i));
            }
        }
    }
    int y = *min_element(v.begin(), v.end());
}
