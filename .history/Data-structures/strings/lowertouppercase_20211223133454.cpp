#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    string s1 = "uiagcuasjcbasiocab";
    // for (int i = 0; i < s1.size(); i++)
    // {
    //     if (s1[i] >= 'a' && s1[i] <= 'z')
    //     {
    //         s1[i] -= 32; // As a is 32 greater than A
    //     }
    // }
    // cout << s1 << endl;

    // // Converting to lower case

    // string s2 = "ASJASJSDLJVBWEUIBVSD";
    // for (int i = 0; i < s2.size(); i++)
    // {
    //     if (s2[i] >= 'A' && s2[i] <= 'Z')
    //     {
    //         s2[i] += 32;
    //     }
    // }
    // cout << s2;

    // Doing the same through built in functions 👍

    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout<<s1<<endl;
}
