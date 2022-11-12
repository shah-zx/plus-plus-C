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
signed main(){
int T;
cin >> T;
while (T--){
    int n , m;
    cin>>n>>m;
    int arr[n];
    int crr[m];
    vector<int> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i] ^ crr[j] == 0){
                 mp.push_back(arr[i]);
            }
        }
        
    }
    

}
}