#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = num;
    cin >> num;
    string s[num];
    for (int i = 1; i <= num; i++)
    {
        cin >> s;
    }
    for (int i = 1; i <= num; i++)
    {
        if (s[i].length() >= 10)
        {
            cout << s[0] << s[i].length() - 2 << s[s.length() - 1];
        }
        else
        {
            cout << s;
        }
    }
}