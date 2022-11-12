#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
signed main()
{
    int no;
    cin >> no;
    int arr[no];
    float sum = 0;
    float sub = 0;
    for (int i = 0; i < no; i++)
    {
        cin >> arr[i];
    }

    // Mean -

    for (int i = 0; i < no; i++)
    {
        sum += arr[i];
    }

    float mean = sum / (float)no;

    // mean //

    for (int i = 0; i < no; i++)
    {
        sub  =  sub +  math.pow((arr[i] - mean), 2);

    }
}