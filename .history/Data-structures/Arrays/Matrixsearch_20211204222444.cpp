#include <iostream>
using namespace std;
int main()
{
    int key;
    int n;
    cout << "Enter the rows";
    cin >> n;
    int m;
    cout << "Enter the columns";
    cin >> m;

    int array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; j++)
        {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j];
        }
    }
    cout<<"Enter the key which you want to search :";
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (array[i][j] == key)
            {
                cout<<"Found ";
            }
            else
            {
                cout<<"Not Found";
            }
        }
        
    }
    
}