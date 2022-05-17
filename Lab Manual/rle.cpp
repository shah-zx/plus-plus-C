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

void printRLE(string str)
{
    int n = str.length();
    for (int i = 0; i < n; i++)
    {

        // Count occurrences of current character
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        // Print character and its count
        cout << str[i] << count;
    }
}

int main()
{
    string str = "wwwwaaadexxxxxxywww";
    printRLE(str);
    return 0;
}

