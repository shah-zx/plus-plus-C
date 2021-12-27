#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int EveOdd(int n)
{
    if(n==0){
        return 0;
    }
    int res = 0;
    if (n % 2 == 0)
    {
        res += EveOdd(n + 6);
    }
    else
    {
        res += EveOdd(n + 7);
    }
    return res;
}

int main()
{
    cout<<EveOdd(15);
}