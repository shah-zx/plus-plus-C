#include<iostream>
// #include<string>
using namespace std;

string Rev(string s){
    if (s.length()==0)
    {
        return "end";
    }
    string ros = s.substr(1);
    Rev(ros);
    cout<<s[0];
}

int main()
{
   string w = "Binod";
   cout<<Rev(w)<<endl;
}