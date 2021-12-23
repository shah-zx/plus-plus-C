#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s1;
    cin >> s1;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u')
        {
            continue;
        }
        cout<<"."<<s1[i]<<endl;
        
    }
    
}
