#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = num / 10;
    cin>>num;
    string s = "word";
    int n = s.length()-2;
    if(s.length()>10){
    cout << s[0] << n << s[s.length() - 1];
    }
    else {
      cout<<s;
    }
}