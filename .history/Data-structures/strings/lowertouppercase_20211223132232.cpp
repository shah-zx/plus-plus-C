#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    string s1 = "uiagcuasjcbasiocab";
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] -= 32;
        }
        
    }
    
}