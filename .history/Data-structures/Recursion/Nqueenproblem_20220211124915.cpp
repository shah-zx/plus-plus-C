#include <bits/stdc++.h>

using namespace std;

bool isSafe(int** a,int r,int c,int n){
    for(int i = 0; i<r; i++){
        if(a[i][c] == 1){
            return false;
        }
    }
    int i = r;
    int j = c;
    while(i>=0 && j>= 0){
        if(a[i][j] == 1){
            return false;
        }
        i--;
        j--;
    }
    i = r;
    j = c;
    while(i>=0 && j< n){
        if(a[i][j] == 1){
            return false;
        }
        i--;
        j++;
    }
    return true;
}

bool nQueen(int** a,int r,int n){
    if(r >= n){
        return true;
    }
    for(int c = 0; c<n; c++){
        if(isSafe(a,r,c,n)){
            a[r][c] = 1;

            if(nQueen(a,r + 1,n)){
                return true;
            }
            a[r][c] = 0; //backtracking
        }
    }
    return false;
}

int main(){
    int n; cin>>n;
    int ** a = new int*[n];        
    for(int i = 0; i<n; i++){
        a[i] = new int[n];
        for(int j = 0; j<n; j++){
            a[i][j] = 0;
        }
    }
    if(nQueen(a,0,n)){
       for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<a[i][j]<<" ";
            }
        cout<<endl;
        } 
    }
    return 0;
}



































































// #include <iostream>
// using namespace std;

// bool isSafe(int **arr, int x, int y, int n)
// {
//     for (int row = 0; row < x; row++)
//     {
//         if (arr[row][y] == 1)
//         {
//             return false;
//         }
//     }
//     int row = x;
//     int col = y;
//     while (row >= 0 && col >= 0)   // Checking the left diagonal 
//     {
//         if (arr[row][col] == 1)
//         {
//             return false;
//         }
//         row--;
//         col--;
//     }
//     row = x;
//     col = y;

//     while (row >= 0 && col < n)   // Checking the right diagonal
//     {
//         if (arr[row][col] == 1)
//         {
//             return false;
//         }
//         row--;
//         col++;
//     }
//     return true;
// }

// bool Nqueen(int **arr, int x, int n)
// {
//     if (x >= n)
//     {
//         return true;
//     }
//     for (int col = 0; col < n; col++)
//     {
//         if (isSafe(arr, x, col, n)){
//             arr[x][col] = 1;
//         }
//         if (Nqueen(arr, x + 1, n))
//         {
//             return true;
//         }
//         arr[x][col] = 0; // Backtracking
//     }

//     return false;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int **arr = new int*[n];  // Using memory allocation we are initializing our arr from 0'es
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = new int[n];
//         for (int j = 0; j < n; j++)
//         {
//             arr[i][j] = 0;
//         }
//     }

//     if (Nqueen(arr, 0, n))
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << arr[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
// }
