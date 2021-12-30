#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repm(i, a, b) for (int i = a; i >= b; i--)
#define ai int arr[]

int sum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int lastdigit = n % 10;
        sum += lastdigit;
        n = n / 10;
    }
    return sum;
}

int_fast32_t main()
{
    int n;
    cin >> n;
    cout << sum(n);
}