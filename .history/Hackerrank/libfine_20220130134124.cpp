#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
signed main()
{
    int T;
    cin >> T;
    while (T--)
    {

        int ddr, mmr, yyyyr;
        int ddd, mmd, yyyyd;
        cin >> ddr >> mmr >> yyyyr;
        cin >> ddd >> mmd >> yyyyd;
        int rem;
        if (ddr > ddd)
        {
            int date = ddr - ddd;
            rem =  date * 15;
        }
        if(ddr == ddd)
        {
            rem = 0;
        }
        if (mmr > mmd)
        {
            int month = mmr - mmd;
            rem = month * 500;
        }
        if(mmr == mmd){
             rem = 0;
        }
        if (yyyyr > yyyyd)
        {
            int h = 10000;
            rem = h;
        }
    }
}