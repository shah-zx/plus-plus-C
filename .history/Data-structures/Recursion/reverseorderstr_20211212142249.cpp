#include<iostream>
#include<string>
using namespace std;

void Rev(string s){
    if (s.length()==0)
    {
        return;
    }
    string ros = s.substr(1);
    Rev(ros);
    
}

int main()
{

}