#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int Palindrome(int n)
{
    int rem = 0;
    while (n != 0)
    {
        int lastdigit = n % 10;
        rem *= 10 + lastdigit;
        n = n/10;
    }
    return rem;
    if(rem == n)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not palindrome";
    }
}

int_fast32_t main()
{
    int n;
    cin >> n;
}