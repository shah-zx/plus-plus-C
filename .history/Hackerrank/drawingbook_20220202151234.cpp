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
    int n, k;
    cin >> n >> k;
    int d = n - k;
    if(d < k){
    if (n == k)
    {
        cout << "0" << endl;
    }
    if (d % 2 == 0)
    {
        int g = 1 + (d - 1) / 2;
        cout << g << endl;
    }
    }
    else
    {
        int h = d / 2;
        cout << h << endl;
    }
}

// int min = 1;
//     int max = n;
//     int count = 0;
//     int page_min = k - 1;
//     int page_max = abs(k - n);
//     if (page_min < page_max)
//     {
//         cout << page_min;
//     }
//     for (int i = 1; i < n - 1; i++)
//     {

//     }
