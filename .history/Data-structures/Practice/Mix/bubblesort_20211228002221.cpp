#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   cin>>n;   // Size
   int arr[n] ={};
   int counter = 1;
   for (int i = 0; i < counter-1; i++)
   {
       cin>>arr[i];
       if (arr[i] > arr[i+1])
       {
           int temp = arr[i];
           arr[i] = arr[i+1];
           arr[i+1] = temp;
       }
       
   }
   for (int i = 0; i < counter -1; i++)
   {
       /* code */
   }
   






}