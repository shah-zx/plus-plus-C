#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
#define vi vector<int>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define repm(i,a,b) for(int i=a; i<b; i--)




int_fast32_t main(){
  
    int n;
    cin>>n;
    vi a(n);
    int sum = 0;
    rep(i , 0 , n)
    {
       sum += a[i];
    }
    cout<<sum;
 }