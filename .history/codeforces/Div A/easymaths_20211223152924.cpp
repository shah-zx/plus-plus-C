#include <bits/stdc++.h>
#include <string>
using namespace std;

void Reverse(string s, int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end(), greater<int>());
    cout << s;
}