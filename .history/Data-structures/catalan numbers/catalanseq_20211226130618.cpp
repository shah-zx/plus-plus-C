#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int Catalan(int n)
{

    int res = 0;
    if(n<=1)
    {
        return 1;
    }
    for (int i = 0; i < n-1; i++)
    {
        res += Catalan(i) + Catalan(n-i-1);
    }
    cout<<res<<endl;
    
}




int main()
{

}