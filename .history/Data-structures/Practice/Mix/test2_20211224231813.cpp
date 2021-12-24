#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int hashc = 0;
    int dollc;
    for (int i = 0; i < s.length(); i++)

    {
        if (s[i] == '#')
        {
            hashc++;
        }
        else if (s[i] == '$')
        {
            dollc++;
        }
    }

    return 0;
}