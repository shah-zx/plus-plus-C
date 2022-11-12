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

void Rle(string nb)
{
    int n = nb.length();
    cout << "Enter the number of frames ";
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < n - 1 && nb[i] == nb[i + 1])
        {
            count++;
            i++;
        }
        cout << nb[i] << count;
    }
}

signed main()
{
    
    return 0;
}