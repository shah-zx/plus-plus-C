#include<iostream>
using namespace std;

string Getsub(string s)
{
     if (s.length() == 0)
     {
         return;
     }
     char ch = s[0];
     string ros = Getsub(s.substr(1));
     if (ch == s[1])
     {
         return ch + " ";
     }
     return ch + ros;
     
}

int main()
{
   cout<<Getsub("ABC");
}