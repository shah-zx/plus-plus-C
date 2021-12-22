#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

void SwapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i + 2)
    {
        if (i+1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6};
}