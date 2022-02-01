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

int Odd(int n)
{
    if (n % 2 == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(arr[i]);
    }
    int r = *max_element(v.begin(), v.end());
    int count = 0;
    int temp;
    int h = 0;
    if (Odd(r))
    {
        while (r % 2 != 0)
        {
            r += 1;
            count++;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (Odd(arr[i]))
            {

                while (arr[i] != r)
                {
                    arr[i]++;
                    count++; // 3
                }
            }
        }
    }
    else
    {

        for (int i = 0; i < n - 1; i++)
        {
            if (Odd(arr[i]))
            {
                while (arr[i] != r)
                {
                    arr[i]++;
                    count++;
                }
            }
            else
            {
                int s = max(count, h);
                s = count;
            }
        }
    }

    if(Odd(count)){
        cout << "No";
    } else{ cout << count;}
}

