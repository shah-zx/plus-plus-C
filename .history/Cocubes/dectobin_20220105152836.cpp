#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_set>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
signed main(){

    int n;
    cin>>n;
    int rem;
    int binary = 0;
    int i = 1;
    while (n!=0)
    {
        rem = n%2;
        n = n/2;
        binary = binary + (rem * i);
        i = i * 10;
    }
    


}