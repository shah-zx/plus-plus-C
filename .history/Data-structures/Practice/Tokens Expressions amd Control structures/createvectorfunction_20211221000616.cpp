#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<vector>
using namespace std;

int CreateVector(int m)
{
   int *arr;
   arr = new int[m];
   return arr[m];
}


int main()
{
   int a;
   cout<<"Enter size";
   cin>>a;
   CreateVector(a);
   cout<<sizeof(CreateVector(a));

}