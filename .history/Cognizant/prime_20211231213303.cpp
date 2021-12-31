#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<algorithm>
#include<math.h>
using namespace std;
#define vi vector<int>
#define rep(i,a,b) for(int i=a; i<b; i++)

bool primeorNot(int n)
{
    for (int i = 0; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return true;
        }
        else{
            return false;
        }
        
    }
    
}


int_fast32_t main(){



 }