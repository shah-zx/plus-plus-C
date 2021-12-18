#include <iostream>
using namespace std;

int main()
{
    char c[] = {};

    for (int i = 0; i < sizeof(c)/ sizeof(c[0]); i++)
    {
        cin>>c[i];
    }
    








    char arr[] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++)
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