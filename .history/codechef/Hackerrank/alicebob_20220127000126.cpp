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
    int arra[3];
    int arrb[3];

    int counta = 0;
    int countb = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (arra[i] > arrb[j])
                {
                    counta++;
                }
                else if (arrb[j] > arra[i]){
                    countb++;
                }
            }
        }
    }
}