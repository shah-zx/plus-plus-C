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
    cin>>arr[i];
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int countpos = 0;
    int countneg = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            countneg++;
        }
        else if (arr[i] > 0)
        {
            countpos++;
        }
        else
        {
            count++;
        }
    }

    float pos = float(countpos) / float(n);
    float neg = float(countneg) / float(n);
    float zer = float(count) / float(n);

    cout << setprecision(6) << fixed;
    cout << countpos << endl;
    cout << countneg << endl;
    cout << count << endl;

}