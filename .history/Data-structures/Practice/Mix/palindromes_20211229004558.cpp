#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

bool Palindrome(int n)
{
    int num = n;
    int rem = 0;
    int lastdigit;
    while (n != 0)
    {
        lastdigit = n % 10;
        rem = (rem*10) + lastdigit;
        n = n / 10;
    }
    if (rem == num)
    {
        return true;
    }
    else
    {
        cout << "Not palindrome";
    }
}

int_fast32_t main()
{
    int n;
    cin >> n;
    Palindrome(n);
    if(n!)
    {
        
    }
    
}