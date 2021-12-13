#include <iostream>
using namespace std;

string Finddup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    string ros = Finddup(s.substr(1));
    if (s[0] == ros[0])
    {
        return ros;
    }
    return s[0] + ros;
}

int main()
{
    cout<<Finddup("aaaabbbeeecdddd");
}
