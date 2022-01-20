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

bool isPalindrome(int n)
{
    int num = n;
    int rev = 0;
    while (n > 0)
    {
        int lastd = n % 10;
        rev = (rev * 10) + lastd;
        n /= 10;
    }
    if (rev == num)
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

    // for (int i = 0; i < n; i++)
    // {
    //     int t;
    //     cin >> t;
    // }
    
    if(isPalindrome(n)){
        cout<<"Bhaiyya ji palindrome";
    } else{ cout << "Na bhaiyya";}
}
