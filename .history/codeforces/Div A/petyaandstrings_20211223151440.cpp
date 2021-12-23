#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;

    if (s1 < s2)
    {
        cout << "-1";
    }
    else if (s1 > s2)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}