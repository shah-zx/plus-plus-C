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

int Odd(int n)
{
    if (n % 2 == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(arr[i]);
    }
    int count = 0;
    int r = *max_element(v.begin(), v.end());
    if(Odd(r)){
        while (r % 2 != 0)
        {
            
        }
        
    }
    int n = 1;
    for (int i = 0; i < n; i++)
    {
        if (Odd(arr[i]))
        {
            while (arr[i] != r)
            {
                n += arr[i];
                count++;
            }
        }
    }
}