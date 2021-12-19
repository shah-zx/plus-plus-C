#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'hello')
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
}