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
signed main()
{

  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
      cin>>arr[i];
  } for (int i = n-2; i>0; i--){
      int idx1 = 0;
      if(arr[i] > arr[i+1]){
          idx1 = i;
          break;
      }
  } if(arr[i] < 0){}
  
}