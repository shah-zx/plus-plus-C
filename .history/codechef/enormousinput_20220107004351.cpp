#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
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

    long long int n; // How many numbers
    long long int k; // divisible by this number
    cin >> n;
    cin >> k;
    int total = 0;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] % k == 0)
        {
            total++;
        }
    }
    cout << total << endl;
}