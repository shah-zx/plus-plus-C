#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

void checkDiv(vector<int> arr, int k)
{

    pair<int, int> ans;
    int sum = 0;

    // Checking for the sum of first k elements :

    for (int i = 0; i < k; i++)
    {
        sum += arr[i];
    }
    bool found = false;
    if (sum % 3 == 0)
    {
        ans = make_pair(0, k - 1);
        found = true;
    }

    // Using sliding window technique :

    for (int j = k; j < arr.size(); j++)
    {
        if (found)
        {
            break;
        }
        sum = sum + arr[j] - arr[j-k];
        if(sum%3 == 0)
        {
            ans = make_pair(j+k-1 , j);
            found = true;
        }
        
    }
    if(!found)
    {
        ans = make_pair(0,-1);
    }
    if(ans.first == -1)
    {
        cout<<"No such subarray exists";
    }
    for (int i = ans.first; i < ans.second; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout <<endl;

}

int main()
{
}