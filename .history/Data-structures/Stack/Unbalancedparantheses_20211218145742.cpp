#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    int l = s.length();
    bool ans = true;
    stack<char> st;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '{' or s[i] == '(' or s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == '}')
        {
            if (s[i] == '{')
            {
                st.pop();
            }
            else
            {
            }
        }
        else if (s[i] == ')')
        {
        }
        else if (s[i] == ']')
        {
        }
    }
}

int main()
{
    string s = "{([])}";
}