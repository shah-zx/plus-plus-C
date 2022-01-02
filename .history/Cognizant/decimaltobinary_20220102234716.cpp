#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int DectoBin(int n)
{
    int ans = 0;
    int i = 0;
    int bit = n & 1;
    ans += (bit * pow(10, i)) + ans;

    // Now shifting the bit to the right  :

    n = n >> 1;
    i++;
}

signed main()
{

    int n;
    cin>>n;
    cout<<DectoBin(n);
}