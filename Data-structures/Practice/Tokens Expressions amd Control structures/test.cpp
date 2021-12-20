#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

int mul(int a)
{
    if (a == 0)
    {
        return 1;
    }
    int res = mul(a - 1);
    return a * res;
}

int main()
{
    int num;
    cin >> num;
    cout << mul(num);
}