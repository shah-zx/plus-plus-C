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
    int n1 = 3;
    int n2 = 3;
    int arra[n1];
    int arrb[n2];
    for (int i = 0; i < n1; i++)
    {
        cin >> arra[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> arrb[i];
    }

    int i = 0;
    int j = 0;

    int counta = 0;
    int countb = 0;

    while (i < n1 && j < n2)
    {
        if (arra[i] > arrb[j])
        {
            counta++;
        }
        else if (arrb[j] > arra[i])
        {
            countb++;
        }
    }
    cout << counta << " " << countb << endl;
}