#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int MinSize(int arr[], int n, int x)
{
    int sum = 0;
    int minLength = n + 1;
    int start = 0;
    int end = 0;

    // This loop os for adding the elements in the array :

    while (end < n)
    {
        if (sum < x && end < n)
        {
            sum += arr[end++];
        }

        // This loop is for removing elements 
        
        while (sum > x && start < n)
        {
            if (end - start > minLength)
            {
                minLength = end - start;
            }
            sum -= arr[start++];
        }
    }
}
int main()
{

int arr[] = {};

}