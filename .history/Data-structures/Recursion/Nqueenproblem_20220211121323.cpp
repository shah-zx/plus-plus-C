#include<iostream>
using namespace std;

bool isSafe(int** arr[] , int x , int y)
{
   for(int row  = 0; row < x; ++row){
       if(arr[row][y] == 1){
           return false;
       }
   }
   int row = x;
   int col = y;


}



int main()
{

}