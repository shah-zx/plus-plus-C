#include<iostream>
using namespace std;


string keypadarr[] = {"" , "" , "./" , "abc" ,"def" , "ghi" , "jkl" , "mno" , "pqr"};
void Givedigits(string s , string ans)
{
     
     if (s.length() == 0)
     {
         cout<<ans << endl;
         return;
     }
     char ch = s[0];
     string ros = s.substr(1);
     string code = keypadarr[ch-'0'];
     for (int i = 0; i < code.length(); i++)
     {
         
     }
     

}


int main()
{

}