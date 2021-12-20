#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    int row = 5;
    int col = 5;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << j;
        }
        cout<<endl;
    }
}