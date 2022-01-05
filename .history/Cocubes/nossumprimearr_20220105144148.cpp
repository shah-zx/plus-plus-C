#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_set>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

bool isPrime(int n)
{
    bool hai = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            hai = 0;
        }
    }
    if (hai == 1)
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
    for (int i = 2; i < n / 2; i++)
    {
        if (isPrime(i))
        {
            if (isPrime(n - i))
            {
                cout << "Yes it can be represented as sum of primes as : " << i << " + " << n - i << "." << endl;
            }
        }
    }
    cout<<"ye khud prime number hai"
}