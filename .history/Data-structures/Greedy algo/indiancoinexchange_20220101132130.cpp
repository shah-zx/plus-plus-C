#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<math.h>
#include<algorithm>
using namespace std;
#define vi vector<int>
#define rep(i,a,b) for(int i=a; i<b; i++)
int_fast32_t main(){ 

int n;
cin>>n;

vi a(n);
rep(i,0,n)
{
    cin>>a[i];
}
int x;
cin>>x;

// Sorting our vector from increasing order to decreasing order

sort(a.begin(), a.end() , greater<int>());

}