#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

int Duplicate(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{

int arr[] = {4,2,1,3,1};
cout<<Duplicate(arr , 5);
}