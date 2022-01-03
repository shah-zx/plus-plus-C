#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <algorithm>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int binSearch(int arr[] , int n , int k)
{
    int s = 0;
    int e = n-1;
    int mid = (s + e)/2;
    while (s<=e)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        if (k < arr[mid])
        {
            
        }
             
    }
    
}


signed main(){



}