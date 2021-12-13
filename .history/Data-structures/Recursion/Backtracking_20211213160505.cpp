#include <iostream>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
}

bool RatinMaze(int **arr, int x, int y, int n  ,int ** solArr)
{
    
    if (isSafe(arr , x , y , n))
    {
        /* code */
    }
    
}

int main()
{
}