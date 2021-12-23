#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
    string s1 = "ajvcajcvasvcvacuasbsc";
    int freq[26];
    for (int i = 0; i <=26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < s1.size(); i++)
    {
        freq[s1[i]-'a']++;
    }
    int MaxF;     // For storing the frequency of the caharacrer //
    char ans = 'a';
        
}