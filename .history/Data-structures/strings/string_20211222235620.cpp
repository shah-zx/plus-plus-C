#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int main()
{
    string s1;
    // cin >> s1;    // For single charater
    getline(cin, s1); // For taking inputs with spaces
    cout << s1;
    string s2  = "fam";
    string s3 = "ily";
    s2.append(s3);
    cout<<s2<<endl;
}