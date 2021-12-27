#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int Findser(int n)
{
    if (n == 0)
    {
        return 0;
    }

    int res = 0;
    res += Findser(n / 2);
    return res;
    cout << res << endl;
}

int main()
{
    int num;
    cin>>num;
    Findser(num);
}