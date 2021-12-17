#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char arr[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != arr[i])
        {
            cout << "." << s[i];
                   
        }
    }
}