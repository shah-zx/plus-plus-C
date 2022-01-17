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

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        ostringstream str1;
        str1 << n;
        string s = str1.str();
        int count = 0;
        int k = (int)s.size();
        for (int i = 0; i < k; i++)
        {
            if (s[i] == '4')
            {
                count++;
            }
            else
            {
                count = count;
            }
        }
        cout << count << endl;
    }
}