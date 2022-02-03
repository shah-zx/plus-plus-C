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

    int n, k;
    cin >> n >> k;
    int array[n];
    vector<int> v;
    vector<int> o;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int sum = 0;
    for (int s = 0; s < n; s++)
    {
        for (int e = s; e < n; e++)
        {
            for (int k = s; k <= e; k++)
                // {
                //     sum += array[k];
                // v.push_back`(sum);
                //     cout << sum << endl;
                //     sum = 0;
                cout << array[k] << endl;
        }
        cout << endl;
    }
    cout << endl;
}

// for(auto l : v){
//     cout << l << endl;
// }

// int r = 0;
// for (auto i : v)
// {
//     r = i % k;
//     o.push_back(r);
// }

// int rem = *max_element(o.begin() , o.end());
// cout << rem << endl;
