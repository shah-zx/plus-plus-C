#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[] = {};
    gets(arr);

    char c1 = '1';
    char c2 = '2';
    char c3 = '3';
    
    
    for (int i = 0; i < sizeof(arr)/ sizeof(arr[0]); i++)
    {
        if (arr[i] == c1 || arr[i] == c2 || arr[i] == c3)
        {
            cout << "Got";
        }
    }
}