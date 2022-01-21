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
    int rem = 0;
    while (b != 0)
    {
        rem = a % b;
        a = b;
        rem = b;
    }
    cout << a;
}

int LCM(int a, int b)
{
    int rem = (a * b) / GCD(a, b);
}

int main()
{

    int T1, T2;
    cin >> T1 >> T2;
    cout << GCD(T1, T2) << endl;
    // for (int i = 0; i < T; i++)
    // {
    //     int n;
    //     cin >> n;
    // }
}