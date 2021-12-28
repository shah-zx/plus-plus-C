#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


void checkDiv(int arr[] , int k)
{
    vector <int> arr;
    pair<int, int> ans;
    int sum = 0;

    // Checking for the sum of first k elements :

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    bool found = false;
    if(sum%3 == 0)
    {
       ans = make_pair(0 , k-1);
       found = true;
    }
    

}

int main()
{


}