#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

int Unique(int arr[], int n)
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
    int arr[] = {1,1,2,2};
    cout << Unique(arr, 5);
}