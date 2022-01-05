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
    int n;
    cin>> n;
    int i = 1;
    int rem;
    int oct = 0;
    while (n != 0)
    {
        rem = n % 8;
        n = n / 8;
        oct = oct + (rem * i);
        i = i * 10;
    }
    cout << oct << endl;
}
