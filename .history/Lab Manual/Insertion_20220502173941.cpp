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



signed main(){

// Insertion sort  

int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

for (int i = 0; i < n; i++)
{
    int j = i - 1;
    int current = arr[j];
    while(j > 0 && arr[j] > current)
    {
        arr[j] = arr[j + 1];
        j--;
    }
    arr[j + 1] = current;
    
}





}