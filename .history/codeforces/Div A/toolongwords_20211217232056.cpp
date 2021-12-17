#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "pneumonoultramicroscopicsilicovolcanoconiosis";
    int n = s.length()-2;
    if(s.length()>10){
    cout << s[0] << n << s[s.length() - 1];
    }
    else {
      return s;
    }
}