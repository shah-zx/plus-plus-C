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

bool isEven(int n)
{
    if (n % 2 == 0)
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

    int T;
    cin >> T;
    int arr[T];
    for (int i = 0; i < T; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    int count2 = 0;
    for (int i = 0; i < T; i++)
    {
        if(isEven(arr[i])){
           count ++;
        } else{
            count2++;
        }
    }
}