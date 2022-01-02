#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

void BinToDec(int n)
{
 int ans = 0;
 int bit = n & 1;
 n>>1;      
 ans += ans * pow(10,0) + bit;
}

signed main(){

int n;

}