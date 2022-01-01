#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

// First we will make two structures showing the start and finish arrays :

struct Activity
{
    int start;
    int finish;
};

// Now we will make a comparison :

bool activityCmp(Activity s1, Activity s2)
{
    return (s1.finish < s2.finish);
}

void Activities(Activity arr[], int n)
{

    // Now we will sort the two activities so that the finish can be compared by the start

    sort(arr, arr + n, activityCmp);

    int i;
    int j;

    i = 0;
    cout << "(" << arr[i].start << "," << arr[i].finish << ")";

    for (int j = 1; i < n; j++)
    {
        if (arr[j].start >= arr[i].finish)
        {
            cout << "(" << arr[j].start << ", "
                 << arr[j].finish << "), ";
            i = j;
        }else{return}
    }
}

int_fast32_t main()
{
    Activity arr1[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    Activities(arr1, n);
}