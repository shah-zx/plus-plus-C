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
    int n;
    cin >> n;
    int h = n;
    vector<int> v;
    vector<int> p;
    int sumn = 0;
    int sumx = 0;
    for (int i = 0; i < h; i++)
    {
        sumn = n + i;
        v.push_back(sumn); // vector with the sum of no. and the indexes
    }
    for (int j = 0; j < h; i++)
    {
        sumx = n ^ i;
        v.push_back(sumx); // vector with the xor of no. and the indexes
    }


     for(auto i : v){
         cout << i << " ";
     }


    // int count = 0;
    // for (auto k : v)
    // {
    //     for (auto d : p)
    //     {
    //         if (k == d)
    //         {
    //             count++;
    //         }
    //     }
    // }
    // cout << count << endl;
}
