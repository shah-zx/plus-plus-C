#include <iostream>
using namespace std;

int main()
{
    char s[] = {};
    cin >> s;
    char arr[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 1; i < s.length(); i++)
    {
        for (int j = 1; j < sizeof(arr) / sizeof(arr[0]); j++)
        {
            if (s[i] == arr[j])
            {
                cout << "Mila";
            }
        }
        cout<<s;
    }
}