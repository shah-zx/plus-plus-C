#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
#include <string.h>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int main()
{

    string s;
    cin>>s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' || s[i] == 'i')
        {
            count++;
        }
        cout << count;
    }
}