#include<iostream>
using namespace std;


void Replace(string s)
{
    if (s.length()==0)
    {
        return;
    }
    if (s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";
        Replace(s.substr(2));
    }
    else{
        cout<<s[0];
        Replace(s.substr(1));
    }
    
    
}


int main()
{
Replace("pippppiiiipi");
}
