#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

string Ciser(string s, int n)
{
    int abhi = s[i] - '0';
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] - '0' + n;
    }
}

int main()
{
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    cout << Ciser(s, n);
}