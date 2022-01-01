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


bool isPrime(int a){
    bool hai = 1;
     for (int i = 2; i < sqrt(a); i++)
     {
         if(a % 2 == 0)
         {
            hai = 0;
         }
         if(hai==1){
             return true;
         }else{
             return false;
         }
     }
     
}


signed main()
{
   
}