#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

int Duplicate(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i]; // This will take out the unique one 
    }
    // for (int i = 1; i < n; i++)
    // {
    //     ans = ans ^ i;
    // }
    return ans;
}

int main()
{

int arr[] = {1,1,2,2};
int u = Duplicate(arr , 4);
cout << u << endl;
}