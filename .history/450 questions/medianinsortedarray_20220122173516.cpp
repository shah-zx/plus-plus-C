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
    while (min < max)
    {
        int mid = (max - min) + min / 2;
        int place = 0;
        for (int i = 0; i < r; i++)
        {
            place += upper_bound(arr[i], arr[i] + c, mid) - arr[i];
            if (place < desired)
            {
                min = mid + 1;
            }
            else
            {
                max = mid;
            }
        }
    }
    return min;
}

signed main()
{

    int m = 3, n = 3;
    int arr[][MAX] = {{1, 3, 5}, {2, 6, 9}, {3, 6, 9}};
    cout << FindMedian(arr, m, n);
}