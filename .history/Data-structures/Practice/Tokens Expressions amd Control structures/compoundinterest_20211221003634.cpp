#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;


int CI(int p , int r , int n){
    int v;
    v = p*(1+r);
    return v+= CI(p, r, n);
}


int main()
{
   int principal;
   cout<<"Enter the principal value";
   float rate;
   cout<<"Enter the rate";
   cout<<CI(principal,rate);


}