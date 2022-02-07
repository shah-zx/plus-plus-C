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
    int T;
    cin >> T;
    while (T--)
    {

        string s;
        cin>> s;
        int y = s.length();
        int count = 0;
        for (int i = 0; i < 100; i++)
        {
            if (arr[i] >= 'A' && arr[i] <= 'Z')
            {
                if (arr[i] != 'S' && arr[i] != 'O')
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}