#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <math.h>
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

    char arr[6] = {'@', '#', '$', '%', '^', '&'};
    int n;
    cin >> n;
    char arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr2[j])
            {
                cout << "The bolt for the given nut is : " << arr2[j] << " ";
            } else { cout << "No bolt found";}
        }
        cout << endl;
    }
}
