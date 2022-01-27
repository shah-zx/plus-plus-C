#include<iostream>
using namespace std;



int Partition(int arr , int l , int r)
{
//     int pivot = arr[r];
//     int i = l-1;
//     for (int j = l; j <r; j++)
//   {
      
//   }
  
}


void Quicksort(int arr , int l , int r)
{
    while (l<r)
    {

        int pi = Partition(arr,l,r);
        Quicksort(arr,l,pi-1);
        Quicksort(arr,pi+1,r);
    }
    
}


int main()
{

}