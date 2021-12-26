#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    int age[20];
    for (int i = 0; i < 20; i++)
    {
        cin >> age[i];
        if (age[i] == NULL)
        {
            return 0;
        }

        if (age[i] < 17)
        {
            age[i] * 200;
        }
        else if (age[i] >= 17 && age[i] <= 40)
        {
            age[i] * 400;
        }
        else
        {
            age[i] * 300;
        }
    }
}