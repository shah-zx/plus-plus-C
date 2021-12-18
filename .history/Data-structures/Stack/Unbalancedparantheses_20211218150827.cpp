#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    int l = s.length();
    bool ans = true; // This is for keeping the track of unmathched brackets
    stack<char> st;
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '{' or s[i] == '(' or s[i] == '[')
        {
            st.push(s[i]);
        }
        else if (s[i] == '}')
        {
            if (!st.empty() and st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }

        else if (s[i] == ')')
        {
            if (!st.empty() and st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }

        else if (s[i] == ']')
        {
            if (!st.empty() and st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ')')
        {
        }
        else if (s[i] == ']')
        {
        }
    }
    if (!st.empty())
    {
        return false;
    }
    return ans;
    
}

int main()
{
    string s = "{([])}";
}