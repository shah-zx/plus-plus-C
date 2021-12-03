#include<iostream>
using namespace std;

int ans = 0;
int x = 1;
int octalToDecimal(int num){
    while (num>0)
    {
        
    int lastdigit = num%10;
    ans += x* lastdigit;
    x*=8;
    num /= 10;
    }
    
}


int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    cout<<octalToDecimal(num);
}