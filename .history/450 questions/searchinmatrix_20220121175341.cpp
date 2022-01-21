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
    int target;
    cin>>target;
    int high = (m * n) - 1;
    int low = 0;
    int mid = ((low + high))  - low / 2;
    while (low <= high)
    {
        if(arr[mid%m][mid/m] == target){
            cout << arr[mid%m][mid/m];
        }
        else if(arr[mid%m][mid/m] < target){
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
}