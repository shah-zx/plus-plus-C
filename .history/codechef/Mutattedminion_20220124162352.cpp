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

int RemSum(int n)
{

    int ld = n % 10;
    n = n / 10;
    return n;
}

signed main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] += k;
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int ld = arr[i] % 10;

        }
        cout << count << endl;
    }
}
