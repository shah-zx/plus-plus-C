#include<iostream>
using namespace std;

void dec(int n){
    if (n==0)
    {
        return;
    }
    int ans = dec(n-1);
    return ans;
}



int main()
{

}