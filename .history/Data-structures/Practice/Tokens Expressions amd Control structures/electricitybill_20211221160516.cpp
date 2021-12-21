#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    string s[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
    }
    float n;
    cout << "Enter the number of units consumed";
    cin >> n;
    if (n >= 1 && n <= 100)
    {
        int res = n * 60;
        return res;
    }
    else if (n >= 100 && n <= 300)
    {
        int res = n * 80;
        return res;
    }
    else
    {
        int res = n * 90;
        return res;
    }

}