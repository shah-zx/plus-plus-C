#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
#include <unordered_set>

using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

signed main()
{

    unordered_set<int> set;
    set.insert(5);
    set.insert(10);
    set.insert(15);
    set.insert(20);
    set.insert(25);
    set.insert(30);

    for (auto it = set.begin(); it != set.end(); it++)
    {
        cout << *it << endl;
    }

    int k = 20;
    bool fk = set.find(k) == set.end();
    if (fk)
    {
        cout << "Not found";
    }
    else
    {
        cout << "Found ";
    }
    int deletekey = 10;
    set.erase(deletekey);
    for (auto it = set.begin(); it != set.end(); it++)
    {
        cout << *it << endl;
    }
}
