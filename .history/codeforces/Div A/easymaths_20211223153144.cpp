#include <bits/stdc++.h>
#include <string>
using namespace std;

void Reverse(string s, int n)
{
    int start = 0;
    int end = s.size();
    while (start <= end)
    {
        swap(start , end);
        start++;
        end--;
    }
}

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end(), greater<int>());
    Reverse(s,s.size());
    cout<<s;
}