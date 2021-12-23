#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s1;
    cin >> s1;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout<<s1<<endl;
}
