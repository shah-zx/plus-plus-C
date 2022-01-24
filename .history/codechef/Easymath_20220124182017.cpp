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

int sod(int n)
{
    int ans = 0;
    while (n != 0)
    {
        int ld = n % 10;
        ans += ld;
        n /= 10;
    }
    return ans;
}

signed main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int product = 0;
        int answer = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                product = arr[i] * arr[j];
                answer = max(sod(product) , answer);
            }
        }
        cout << answer << endl;
    }
}
