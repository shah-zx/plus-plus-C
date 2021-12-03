#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;    
    cout << "Enter the size of the array :";
    cin >> n;
    int array[n];
    for (int i = 0; i < array[n]; i++)
    {
        cin>>array[i];
    }
    
    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < array[n]; i++)
    {
        maxNo = max(maxNo, array[i]);
        minNo = min(minNo, array[i]);s
    }
    cout << maxNo << " " << minNo << endl;
    return 0;
}
