#include <iostream>
#include <stack>
using namespace std;

int Prec(char c)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '^')
        {
            return 3;
        }
        else if (s[i] == '/' || s[i] == '*')
        {
            return 2;
        }
        else if (s[i] == '+' || s[i] == '-')
        {
            return 1;
        }
        else
            return -1;
    }
}

string InfixtoPost(string s)
{

}
int main()
{
}