#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

void primeorNot(int n)
{
    for (int i = 2; i <=sqrt(n); i++)
    {
        if (n % 2 == 0)
        {
            cout << "Not prime" << endl;
        }
        else
        {
            cout<<"prime";
        }
    }
}

int_fast32_t main()
{
    int n;
    cin>> n;
    primeorNot(n);
}