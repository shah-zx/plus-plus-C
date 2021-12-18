#include <iostream>
#include <stack>
using namespace std;

int Prec(char c)
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

}
int main()
{
}