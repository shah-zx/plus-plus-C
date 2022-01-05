#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_set>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

signed main()
{

    int num;
    cin >> num;
    int ans = 0;
    int i = 0;
    while (num != 0)
    {
        int digit = num % 10;
        if (digit == 1)
        {
            ans += pow(2, i);
        }
        num = num / 10;
        i++;
    }

    cout<<ans;
}
