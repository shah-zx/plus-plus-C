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
    for (int i = 0; i < s1.size(); i++)
    {
        for (int j = 0; j < s2.size(); j++)
        {
            if (s1[i] - s2[j] == 0)
            {
                cout << "1";
            }
        }
    }
}