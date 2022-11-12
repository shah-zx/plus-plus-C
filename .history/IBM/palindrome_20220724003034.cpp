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

bool Palindrome(int n)
{
    int res = 0;
    int d = n;
    while (n != 0)
    {
        int ld = n % 10;
        res = (res * 10) + ld;
        n /= 10;
    }
    if(res == d){
        return true;
    }
    else {
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
        if(){

        }
    }
    
}