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

    int n;
    cin >> n;
    int array[n];
    vector<int> v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int sum = 0;
    vector <int> v;
    for (int s = 0; s < n; s++)
    {
        for (int e = s; e < n; e++)
        {
            for (int k = s; k <= e; k++)
            {
                sum += array[k];
            }
            cout << endl;
        }
        cout << endl;
    }
}
