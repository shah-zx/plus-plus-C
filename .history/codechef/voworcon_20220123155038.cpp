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

    char c;
    cin >> c;
    char arr[5] = {'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < 5; i++)
    {
        if (c == arr[i])
        {
            cout << "Vowel" << endl;
        }
    }
}