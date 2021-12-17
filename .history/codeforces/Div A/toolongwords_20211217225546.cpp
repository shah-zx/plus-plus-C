#include<iostream>
using namespace std;




int main()
{
   string s = "shahnawaz";
   int i;
   int n = 0;
   for (int i = 1; i < s.length()-1; i++)
   {
       n+=i;
   }
   
   for (int i = 1; i < 2; i++)
   {
      
       cout<<s[0]<<s.length()<<s[s.length()-1];

       
   }
   
   
}