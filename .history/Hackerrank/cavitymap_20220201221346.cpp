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
    char arr[100][100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

        for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == n - 1 || j == 0 || j == n - 1)
            {
                cout << arr[i][j];
            }
            else if (arr[i][j] > arr[i][j - 1] && arr[i][j] > arr[i][j + 1] && arr[i][j] > arr[i + 1][j] && arr[i][j] > arr[i - 1][j])
            {
                cout << "X";
            }
            else
            {
                cout << arr[i][j];
            }
        }
        cout << endl;
    }
}
