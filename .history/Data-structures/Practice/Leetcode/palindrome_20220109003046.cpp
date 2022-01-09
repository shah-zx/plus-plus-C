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

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int n = x;
        long long int rem = 0;
        while (x > 0)
        {
            int digit = x % 10;
            rem = (rem * 10) + digit;
            x = x / 10;
        }
        if (n == rem)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

signed main()
{
    Solution sol;
    int c;
    cin >> c;
    if (sol.isPalindrome(c))
    {
        cout << "Palindrome";
    }
    else{
        cout<<"bhag";
    }
}