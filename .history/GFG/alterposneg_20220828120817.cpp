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

    int h;
    cin >> h;
    int arr[h];
    vector<int> neg, pos;

    // Filling the negative and positive arrays //

    for (int i = 0; i < h; i++)
    {
        if (arr[i] < 0)
        {
            neg.push_back(arr[i]);
        }
        else
        {
            pos.push_back(arr[i]);
        }
    }

    int i = 0, j = 0, k = 0;
    while (i < neg.size() && j < pos.size())
    {
        arr[k++] = pos[j++];
        arr[k++] = neg[i++];
    }
    while (j < pos.size())
    {
        arr[k++] = pos[j++];
    }
    while (i < neg.size())
    {
        arr[k++] = neg[i++];
    }
    return 0;
}