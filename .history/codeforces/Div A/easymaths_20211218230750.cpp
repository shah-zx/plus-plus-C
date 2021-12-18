#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[100];
    gets(arr);

    char num[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (arr[i] == num[i])
        {
            cout << "got";
        }
    }
}