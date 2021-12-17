#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

#define n 100

// class stack{
//     int *arr;
//     int top;
//     public: 
//     stack()
//     {
//         arr = new int[n];
//         top = -1;
//     }

// };


void Prefix(string s)
{
   stack <int> st;
   for (int i = s.length()-1; i >=0; i--)
   {
       if (s[i] >= '0' && s[i] <= '9')
       {
           st.push(s[i]-1);
       }
       else{
           int op1 = st.top();

       }
   }
   
       
}


int main()
{

}