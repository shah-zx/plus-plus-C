#include <bits/stdc++.h>
#include <stack>
#include <queue>
using namespace std;

void Intersection(int arr[], int n , int m)
{
    int i = 0;
    int j = 0;
    while (i<n && j<m)
    {
        if (arr[i]<arr[j])
        {
            i++; 
        }
        else if(arr[i] == arr[j])
        {

        }
    }
}

int main()
{
}