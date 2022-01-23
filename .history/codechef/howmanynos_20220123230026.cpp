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
    int i;
    cin>> i;
    int count = 0;
    while (i != 0)
    {
        int ld = i % 10;
        count ++;
        i = i / 10;
    } cout << count;
    
}