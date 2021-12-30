#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

bool evenOdd(int n)
{
    if (n & 1 == 0)
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
cin>>n;
if(evenOdd(n))
{ cout<< "even";}else{ cout<< "odd";};
}