#include<iostream>
using namespace std;

int ans = 0;
int x = 1;
int octalToDecimal(int num){
    int lastdigit = num%10;
    ans += x* lastdigit;
    
}


int main()
{
    int num;
    cout<<"Enter the number";
    cin>>num;
    cout<<octalToDecimal(num);
}