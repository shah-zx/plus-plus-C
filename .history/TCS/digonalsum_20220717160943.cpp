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
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int suml = 0;
    int sumr = 0;
    // left diagonal :
    int i = 0;
    int j = 0;
    while (i != n && j != n)
    {
        suml += arr[i][j];
        i++;
        j++;
    }

    // Right diagonal 

    int i = 0;
    int j = n - 1;

    while(i !=n && j != 0){
        sumr += arr[i][j];
        i++;
        j--;
    }

     int ans = abs(suml - sumr);

}