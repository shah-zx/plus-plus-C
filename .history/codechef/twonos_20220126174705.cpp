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

bool Even(int n)
{
    if (n % 2 == 0)
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
    int T;
    cin >> T;
    while (T--)
    {

        int a, b, t;
        cin >> a >> b >> t;
        int x = (t+1)/2;
        int c = pow(2 , x+1) * a;
        int d = pow(2 , x) * b;
        if(c > d){
            int total = (2 * a) / b;
            cout << total << endl;
        }
    }
}