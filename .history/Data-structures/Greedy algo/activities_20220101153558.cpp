#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define rep(i, a, b) for (int i = a; i < b; i++)

// First we will make two structures showing the start and finish arrays :

struct Activity {
    int start;
    int finish;
};

// Now we will make a comparison :

bool activityCmp(Activity s1 , Activity s2)
{
    return s1.finish < s2.finish;
}


void Activities(int start[], int finish[], int n)
{

    int i, j;
    i = 0;
    cout << " " << i;
    for (j = 1; j < n; j++)
    {
        if (start[j] >= finish[i])
        {
            cout << " " << j;
            i = j;
        }
    }
}

int_fast32_t main()
{
    int arr1[] = {12 , 10 , 20};
    int arr2[] = {25 , 20 , 30};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    Activities(arr1, arr2, n);
}