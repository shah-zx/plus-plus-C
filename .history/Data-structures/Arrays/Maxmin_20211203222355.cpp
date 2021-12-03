#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    int array[n];
    cout << "Enter the size of the array :";
    cin >> n;
    int maxNo = INT_MAX;
    int minNo = INT_MIN;

    for (int i = 0; i < array[n]; i++)
    {
        maxNo = max(maxNo, array[i]);
        minNo = max(maxNo, array[i]);
    }
    cout << maxNo << " " << minNo << endl;
    return 0;
}
