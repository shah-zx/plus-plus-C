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
signed main()
{
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 and s[i] <= 90)
        {
            s[i] += 32;
        }
    }
    int freq[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int index = ch - 'a';
        freq[index]++;
    }
    bool pangram = true;
    for (int i = 0; i < 26; i++)
    {
        if(freq[i] != 1){
            pangram = false;
        }
        else{
            cout << "Yup its a pangram"
        }
    }
       
}