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

bool Persq(int n)
{
    int d = sqrt(n);
    int r = n / sqrt(n);
    if (r == sqrt(n))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int binarySearch(vector <int> a)
{
    int s = 0; // start of our  array
    int e = a.size(); // end of the array
    int count = 0;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (Persq(a[mid]))
        {
            return mid;
        }
        else if (key < array[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
}

signed main()
{
    int T;
    cin >> T;
    while (T--)
    {

        int n1;
        int n2;
        cin >> n1 >> n2;
        int count = 0;
        vector<int> u;
        for (int i = n1; i <= n2; i++)
        {
            u.push_back(i);
        }
    }
}
