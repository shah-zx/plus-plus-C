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
    
    int maxNo = INT_MAX;
    int minNo = INT_MIN;

    for (int i = 0; i < array[n]; i++)
    {
        maxNo = max(maxNo, array[i]);
        minNo = max(minNo, array[i]);
    }
    cout << maxNo << " " << minNo << endl;
    return 0;
}
