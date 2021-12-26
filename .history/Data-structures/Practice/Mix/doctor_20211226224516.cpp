#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
    int age[20];
    int countseventeen = 0;
    int countsevtoforty = 0;
    int countmoreforty = 0;
    for (int i = 0; i < 20; i++)
    {
        cin >> age[i];
        if (age[i] == NULL)
        {
            return 0;
        }

        if (age[i] < 17)
        {
            countseventeen += age[i] * 200;
        }
        else if (age[i] >= 17 && age[i] <= 40)
        {
            countsevtoforty += age[i] * 400;
        }
        else
        {
            countmoreforty += age[i] * 300;
        }
    }
    int total = countseventeen + countmoreforty + countmoreforty
    cout<<"Total Income"<< " "<<" INR";
}