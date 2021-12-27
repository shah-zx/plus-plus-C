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
        if (sum <= x && end < n)
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
    return minLength;
}
int main()
{

    int arr[] = {1, 4, 45, 6, 10, 19};
    int x = 51;
    int n = 6;
    int mLength = MinSize(arr, n, x);
    if (mLength == n + 1)
    {
        cout << "No such sub array exists";
    }
    else
    {
        cout << "Found : " << mLength;
    }
    return 0;
}