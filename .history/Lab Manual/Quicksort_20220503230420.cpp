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



void Swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


int Partition(int arr[] , int l , int h){
    int i = l - 1;
    int pivot = arr[h];
    for (int j = l; j < h; j++)
    {
        if(arr[j] < pivot){
            i++;
            Swap(arr , i , j);
        }

    }
    Swap(arr , i+1 , h);
    
}

void QuickSort(int arr[], int l, int h){
  int Pi = Partition(arr , l , h);
  
}


signed main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
}