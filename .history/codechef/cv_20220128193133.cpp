#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

bool Vowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}

signed main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin>>n;
        char arr[n];
        for (int i = 0; i < n; i++)
        {
           cin>> arr[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
           if((!Vowel(arr[i])  && (Vowel(arr[i+1]) ))){
                count ++;
           }
        }
        cout << count << endl;
        
    }
}
