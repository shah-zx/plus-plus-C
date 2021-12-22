#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

int Uniqie(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[5] = {2,4,7,2,7};
}