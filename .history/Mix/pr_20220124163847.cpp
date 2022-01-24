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

bool DivbySev(int n)
{
    int ld = n % 10;
    int f = ld * 2;
    int r = RemSum(n);
    int rem = r - f;
    if (rem % 7 == 0 || rem == 0)
    {
        return true;
    }
}
signed main()
{
    int n;
    cin >> n;
    int arr[n];
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
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}