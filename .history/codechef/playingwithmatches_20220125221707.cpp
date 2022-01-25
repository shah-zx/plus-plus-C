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

int FindSum(int n)
{
    vector<int> v;
    while (n != 0)
    {
        int ld = n % 10;
        v.push_back(ld);
        n = n / 10;
    }
    reverse(v.begin(), v.end());
    int array[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    for (int i = 0; i < 10; i++)
    {
        
}

signed main()
{

    // int T;
    // cin >> T;
    // while (T--)
    // {
    //     int n1, n2;
    //     cin >> n1 >> n2;
    //     int s = n1 + n2;
    // }
    FindSum(4567);
}