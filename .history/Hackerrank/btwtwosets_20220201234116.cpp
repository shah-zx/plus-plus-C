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

int LCM(int arr[], int n)
{
    int lcm = arr[0];
    for (int i = 0; i < n; i++)
    {
        lcm = (lcm * arr[i]) / __gcd(lcm, arr[i]);
    }
    return lcm;
}

int GCD(int arr[], int m)
{
    int gcd = arr[0];
    int j = 0;
    while (m < 0)
    {
        if (arr[j] % gcd == 0)
        {
            j++;
        }
        else
        {
            gcd = arr[j] % gcd;
        }
    }
    return gcd;
}

signed main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }
    int y = LCM(arr , n);
    int x = GCD(arr2 , m);

    cout << "LCM: " << y <<endl;
    cout << "GCD: " << x <<endl;

}
