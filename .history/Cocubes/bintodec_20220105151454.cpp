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

int BinToDec(int n)
{
    int ans = 0;
    while (n != 0)
    {
        int i = 0;
        int digit = n % 10;
        if (digit == 1)
        {
            ans += pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << ans;
}

signed main()
{

    int num;
    cin >> num;
    cout << BinToDec(num);
}
