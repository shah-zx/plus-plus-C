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

const int MAX = 100;

int FindMedian(int arr[][MAX], int r, int c)
{
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < r; i++)
    {
        if (arr[i][0] < min)
        { // This is our minimum no. in row
            min = arr[i][0];
        }
        if (arr[i][c - 1] > max)
        { // This is our maximum no. in row
            max = arr[i][c - 1];
        }
    }
    int desired = (r * c + 1) / 2;

}

signed main()
{

    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
}