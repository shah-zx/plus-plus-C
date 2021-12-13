#include <iostream>
using namespace std;

void Getsubascii(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
    }
    string ros = s.substr(1);
    char ch = s[0];
    int code = ch;
    Getsubascii(ros, ans);
    Getsubascii(ros, ans + ch);
    Getsubascii(ros, ans + to_string(code));
}

int main()
{
    Getsubascii("ABC" , "");
}