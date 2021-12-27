#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int SubArray(int arr[] , int n , int k , int x)
{
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    if(sum<x)
    {
        sum = ans;
    }
}


int main()
{

}