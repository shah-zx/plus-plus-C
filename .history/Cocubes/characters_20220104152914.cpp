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
signed main()
{

    char s[20];
    cin >> s;
    int n = strlen(s);
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' && count >= 0 && count <= 9)
        {

            if (s[i] == s[i + 1])
            {
                count++;
            }
        }
        cout << s[i] << count;
    }
}