#include<iostream>
using namespace std;

string Getsub(string s , string ans)
{
     
     if (s.length() == 0)
     {
         return "";
     }
     char ch = s[0];
     string ros = s.substr(1);
     Getsub(ros , ans);
     Getsub(ros, ans+ch);
     
}

int main()
{
   cout<<Getsub("ABC" , "");
}
