#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

int mul(int a)
{
    int s +=  a*mul(a-1);
}

int main()
{
   cout<<mul(5);
}