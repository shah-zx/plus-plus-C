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

int n;
cin>>n;
int arr[n];
unordered_set<int> s;

for (int i = 0; i < n; i++)
{
    s.insert(i);
}
for (auto it = s.begin(); it != s.end(); it++)
{
    cout<<it;
}



}