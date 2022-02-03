#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
#include <limits.h>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)




int Partition(int array[], int l , int h){


    
}



void QuickSort(int arr[], int l, int h)
{

    int pi = Partition(arr, l, h);
    QuickSort(arr, l, pi - 1);
    QuickSort(arr, pi + 1, h);
}

signed main()
{
}