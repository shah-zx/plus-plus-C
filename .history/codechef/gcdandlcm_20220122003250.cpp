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
    
}

int LCM(int a, int b)
{
    int r = (a * b) / GCD(a, b);
    cout << r << endl;
}

int main()
{

    int T1, T2;
    cin >> T1 >> T2;
    int rem = 0;
    while (T2 != 0)
    {
        rem = T1 % T2;
        T1 = T2;
        rem = T2;
    }
    cout << T1;

    // for (int i = 0; i < T; i++)
    // {
    //     int n;
    //     cin >> n;
    // }
}