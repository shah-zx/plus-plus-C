#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

int mul(int a)
{
    int res = mul(a-1);
    return a*res;
}

int main()
{
    int num;
    cin>>num;
   cout<<mul(num);
}