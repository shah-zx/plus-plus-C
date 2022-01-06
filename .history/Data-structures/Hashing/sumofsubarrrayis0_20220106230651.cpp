#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

bool prefSum(int arr[], int n)
{
    int prefSum = 0;
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        prefSum += arr[i];
        if (prefSum == 0)
        {
            return true;
        }
        if (s.find(prefSum) != s.end())
        {
            return true;
        }
        return false;
        s.insert(prefSum);
    }
    // cout <<prefSum << endl;
}

signed main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(prefSum(arr, n))
    {
        cout<<"There is subarray with sum 0";
    }else{ cout<<"nai hai";}
}