#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int hashc = 0;
    int starc = 0;
    for (int i = 0; i < s.length(); i++)

    {
        if (s[i] == '#')
        {
            hashc++;
        }
        else if (s[i] == '$')
        {
            starc++;
        }
        if (starc > hashc)
        {
            cout << "1";
        }
        else if (starc < hashc)
        {
            cout << "-1";
        }
        else{
            cout<<"0"
        }
    }

    return 0;
}