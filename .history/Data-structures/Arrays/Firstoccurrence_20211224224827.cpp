#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


int FirstOccur(int arr[]  , int n , int k)
{
    int s =0;
    int e = n-1;
    int mid = (s+e)/2;
    int ans = -1;
    while (s<=e)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        if (k>arr[mid])
        {
            s = mid +1;
        }
        
    }
    
}


int main()
{

}