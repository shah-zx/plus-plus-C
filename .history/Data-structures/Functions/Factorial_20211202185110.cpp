#include<iostream>
using namespace std;


int factorial = 1;
int fact(int num)
{
   for (int i = 2; i <= num; i++)
   {
       factorial *=i;
   }
   return factorial;
   
} 

int main()
{
   int n;
   cout << "Enter the number of which factorial is to be found";
   cin>>n;
   int answer = fact(n);
   cout<<"This is the factorial :"
}