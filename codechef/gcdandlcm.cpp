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

int GCD(int a, int b)
{
    while (b != 0)
    {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int LCM(int a, int b)
{
    int r = (a * b) / GCD(a, b);
    return r;
}

int main()
{

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n1 , n2;
        cin >> n1 >> n2;
        cout << GCD(n1 ,n2);

    }
    return 0;
}