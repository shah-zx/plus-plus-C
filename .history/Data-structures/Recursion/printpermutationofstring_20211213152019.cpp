#include<iostream>
using namespace std;

void Permutate(string s , string ans)
 {
     if (s.length()==0)
     {
         cout<<ans;
     }
    //  string ros = substr()
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0,i) + s.substr(i+1);
        Permutate(ros , ans + ch);
    }
    
 }


int main()
{

}