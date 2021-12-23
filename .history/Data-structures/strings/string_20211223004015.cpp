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
    string s2 = "fam";
    string s3 = "ily";
    cout << endl;
    s2.append(s3);
    cout << s1 + s2 << endl;  // this is how we can print out the added strings //
    s2.clear();
    cout<<s2;
    string s5 = "abc";
    string s6 = "xyz";
    cout<< compare(s5, s6);
      
}