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

// aa f;
// course c;
// tech t;

string str1  ="ABC";
string str2;

strcpy(str2 , str1);
cout<<str2<<endl;
return 0;
}