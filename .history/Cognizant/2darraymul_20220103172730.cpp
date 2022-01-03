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
    int result[3][2];
    cout << "Fill the details of the frist array";
    int arr1[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; i++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Fill the details of the second array";
    int arr2[4][2];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; i < 4; i++)
            {
                sum += arr1[i][k] * arr2[j][k];
            }
        }
        result = sum;
    }
    sum = 0;
}
