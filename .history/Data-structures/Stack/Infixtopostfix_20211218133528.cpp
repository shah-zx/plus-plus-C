#include <iostream>
#include <stack>
using namespace std;

int Prec(char c)   // For checking precedence
{

    if (c == '^')
    {
        return 3;
    }
    else if (c == '/' || c == '*')
    {
        return 2;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else
        return -1;
}

string InfixtoPost(string s)
{
    stack<char> st;
    for (int i = 0; i < st.length(); i++)
    {
         st.push(s[i]);
    }
}
int main()
{
}