#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    string s[4];
    for (int i = 0; i < s.length(); i++)
    {
        cin >> s[i];
    }
    float n;
    cout << "Enter the number of units consumed";
    cin >> n;
    if (n >= 1 && n <= 100)
    {
        int res = n*60;
        return res;
    }
}