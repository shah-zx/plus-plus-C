#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = num;
    cin >> num;
    string s;
    for (int i = 1; i <= num; i++)
    {
        cin >> s;
    }
    for (int i = 1; i <= num; i++)
    {
        if (s.length() >= 10)
        {
            cout << s[0] << s.length() - 2 << s[s.length() - 1];
        }
    }
    cout << s;
}