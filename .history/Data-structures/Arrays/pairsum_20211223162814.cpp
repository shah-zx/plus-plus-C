#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

vector <vector <int>> Pairsum(int arr[], int size, int s)
{
    vector<vector<int>> ans;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; i < size - 1; i++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;

                temp.push_back(min(arr[i], arr[j])); // As the elements shiuld be in sorted order so we will find min and max
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {};
}