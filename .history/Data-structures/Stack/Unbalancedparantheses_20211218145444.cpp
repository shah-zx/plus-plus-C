#include<iostream>
#include<stack>
using namespace std;


bool isValid(string s)
{
     int l = s.length();
     for (int i = 0; i < l; i++)
     {
         stack <char> st;
         if (s[i] == '{' or s[i] == '(' or s[i] == '[')
         {
             st.push(s[i]);
         }
         else if (s[i]=='}')
         {

         }
         else if (s[i]==')')
         {
             
         }else if (s[i]==']')
         {
             
         }
     }
     
}


int main()
{
   string s = "{([])}";

}