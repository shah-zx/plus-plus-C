#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    char a[15] = {};
    char arr[15] = {};
    for (int i = 0; i < 15; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'y' || arr[i] == 'i')
        {
            arr[i] = '%';
            a + arr[i];
        }
        for (int i = 5; i < 10; i++)
        {
            if (arr[i] != 'a' || arr[i] != 'e' || arr[i] != 'o' || arr[i] != 'u' || arr[i] != 'y' || arr[i] != 'i')
            {
                arr[i] = '#';
                a + arr[i];
            }
            for (int i = 10; i <= 15; i++)
            {
                arr[i] = arr[i] - '0';
                a + arr[i];
            }
        }
    }
    for (int i = 0; i < 15; i++)
    {
        cout<<a[i];
    }
    
}