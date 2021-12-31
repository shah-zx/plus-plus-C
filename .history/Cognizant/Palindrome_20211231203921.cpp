#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

bool isPalindrome(int n)
{
    int num = n;
    int res = 0;
    while (n != 0)
    {
        int lastdigit = n % 10;
        res += lastdigit * 10;
        n = n / 10;
    }
    if (res == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int_fast32_t main()
{

    int n;
    cin >> n;
    if (isPalindrome(n))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }
}