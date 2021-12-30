#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)
int_fast32_t main()
{

    int arr[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        swap(arr[i + 1], arr[i + 2]);
        cout << arr[i];
    }
}