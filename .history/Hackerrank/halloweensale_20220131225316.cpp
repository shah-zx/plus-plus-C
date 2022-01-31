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

    int p, d, m, s;
    cin >> p >> d >> m >> s;
    int sum = p;
    int count = 0;
    while (p >= m && s >= 0)
    {
        s -= p;
        p -= d;
        sum += p;
        count++;
    }
    if (p <= m && s > p)
    {
        while(s >= 0){
            int c;
            s -= p;
            c = p;
        }
        count++;
    }

    cout << count << endl;
}

// cout << "p:" << endl;

// cout << "sum:" << endl;
// cout << sum << endl;
