#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n] = {};
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i] < arr[j])
            {
                count++;
            }
        }
    }
    return count;
}