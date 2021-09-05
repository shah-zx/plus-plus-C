
// Amiguity = confusion //
// Sometimes we encounter some situations in which if we are deriving two classes in a single class then 
// sometimes the member functions of both the classes are same and if we call that function in our derived function then the compiler 
// comes in ambiguity that which function to call //

#include<iostream>
using namespace std;


class base1{
public:
void greet(void)
{
    cout<<"How are you"<<endl;
}
};

class base2{
    public:
void greet(void)
{
    cout<<"Kaise ho"<<endl;
}
};

class derived : public base1 , public base2
{
    int a;
    public:
    void greet()
    {
        base1 ::greet();  // By doing this we resolved the ambiguity //  // We can also do for base 2 //
    }
};

class b{
public:
void say(void)
{
    cout<<"Hello world";
}
};


class d{
public:
void say(void)
{
    cout<<"Hello world my beautifull people ";
}
};



int main()

{
//     // Ambiguiity one //
// base1 obj;
// base2 b2;
// obj.greet();
// derived d;
// b2.greet();
// d.greet();
b s;
s.say();
d a;
a.say();
return 0;
}