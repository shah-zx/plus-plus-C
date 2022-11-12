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

bool Palindrome(int a)
{

    int d = a;
    int res = 0;
    while (a != 0)
    {
        int ld = a % 10;
        res = (res * 10) + ld;
        a = a / 10;
    }
    if (res == d)
    {
        return true;
    }
    else
    {
        return false;
    }
}

signed main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int count = 0;
    int sum = 0;
    for (int i = n1; i <= n2; i++)
    {
        if (Palindrome(i))
        {
            count++;
        }
        sum++;
    }
    int result = sum - count;
    cout << result << endl;
}