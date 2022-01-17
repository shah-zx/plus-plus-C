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
int main()
{

    // int T;
    // cin >> T;
    // for (int i = 0; i < T; i++)
    // {
    //     int a, b;
    //     cin >> a >> b;
    //     cout << a % b << endl;
    // }

    vector<int> m;
    m.push_back(50);
    m.push_back(20);
    m.push_back(10);
    m.push_back(30);
    m.push_back(40);
    sort(m.begin(), m.end());
    // m.pop_back();
    int k = (int)m.size();
    for (int i = 0; i < k; i++)
    {
        cout << m[i] << " ";
    }
    cout << endl;
}
