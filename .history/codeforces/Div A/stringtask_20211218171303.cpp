#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char arr[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++)
        {
            if (s[i] == arr[j])
            {
                cout << "Mila";
            }
        }
    }
}