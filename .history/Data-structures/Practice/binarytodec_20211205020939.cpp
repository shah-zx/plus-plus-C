#include<iostream>
using namespace std;


int Dectobin(int num) {
    int count = 0;
    int x = 1;
    while (num>0)
    {
        int lastdigit = num % 10;
        count += x*lastdigit;
        x*=2;
        num /= 10;
    }
    return count;
}



int main()

{
   int n;
   cin>>n;
   cout<<Dectobin(n);
}