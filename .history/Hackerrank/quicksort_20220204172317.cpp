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



int Partiton(int arr[] , int l , int h){
    int Pivot = arr[h];
    int i = l - 1;
    int j = l;
    for (int i = j; i < h; i++)
    {
        if(arr[j] < Pivot){
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    

}







signed main(){
int n;
int arr[n];
}