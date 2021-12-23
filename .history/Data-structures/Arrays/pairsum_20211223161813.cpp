#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

void Pairsum(int arr[], int size, int s)
{
    vector <int> temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; i < size - 1; i++)
        {
            if (arr[i] + arr[j] == s)
            {
                temp.push_back(s);
            }
        }
    }
}

int main()
{
    int arr[] = {};
}