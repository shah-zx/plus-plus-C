#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
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

    int amount;
    int balance;

    cin >> amount;
    cin >> balance;
    if (amount % 5 == 0)
    {
        float remaining = balance - (amount - 0.50);
    } else{
        "Transaction could not be processed";
    }
}