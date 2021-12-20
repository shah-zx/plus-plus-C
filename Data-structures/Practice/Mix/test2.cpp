#include<iostream>
#include<cstring>
using namespace std;


class aa{
    public: void print(){
        cout<<"In find";
    }
};

class course:public aa{
    public: void print(){
        cout<<"In course";
    }
};

class tech:public course {};


int main()
{
cout<<is_array<int>::value;
cout<<is_array<char[10]>::value;
cout<<is_array<string>::value;

return 0;
}