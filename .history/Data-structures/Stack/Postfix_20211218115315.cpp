#include<iostream>
#include<stack>
using namespace std;

int Postfix(string s)
{
    stack <int> st;
    for (int i = 0; i < s.length()-1; i++)
    {
        if (s[i]>='0' && s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch (s[i])
            {
                case  '+':
                st.push()
            }
        }
        
    }
    
}



int main()
{

}