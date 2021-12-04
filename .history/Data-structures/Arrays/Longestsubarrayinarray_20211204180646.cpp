
// Here we will be creating an arithmetic array in which the difference between the sub arrays is always same //

#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the size of the array";
   cin>>n;
   int array[n];
   for (size_t i = 0; i < n; i++)
   {
       cin>> array[i];
   }
   int pd = array[1] - array[0];
   int current = 2;
   int ans = 2;
   int j = 2;
}