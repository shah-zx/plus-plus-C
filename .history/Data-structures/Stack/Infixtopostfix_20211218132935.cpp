#include <iostream>
#include <stack>
using namespace std;

int Prec(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '^')
        {
            return 3;
        }

    }
}

int main()
{
}