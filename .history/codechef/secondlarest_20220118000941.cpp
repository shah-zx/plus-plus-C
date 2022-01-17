#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
signed main(){

int T;
cin>>T;
for (int i = 0; i < T; i++)
{
    int A[3] , max = INT_MIN , smax = INT_MIN;
    cin>>A[0]>>A[1]>>A[2];
    for (int j = 0; j < 3; j++)
    {
        if (A[j] > max)
        {
            smax = max;
            A[j] = max;
        }
    }
    
}



}