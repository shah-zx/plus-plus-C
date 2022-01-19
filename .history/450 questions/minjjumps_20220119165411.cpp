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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if( n <= 1){
       cout << "0";
    }
    if(n == 0){
        cout <<"-1";
    }
    if (arr[0] == 0)
    {
        cout << "-1";
    }
    int step = arr[0];
    int maxr = arr[0];
    int jump = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (i == n - 1)
        {
            return jump;
        }
        maxr = max(maxr, i + arr[i]);
        step--;
        if (step == 0)
        {
            jump++;

            if (i >=maxr)
            {
                return -1;
            }
        }
        step = maxr - i;
    }
    cout << jump;
}
