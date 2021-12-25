#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int arr[num] = {};
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 8; i++)
    {
        cout<<max(arr);
    }
}