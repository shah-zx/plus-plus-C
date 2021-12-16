
// Here we will do an exercise on inheritance //

#include <iostream>
#include <math.h>
using namespace std;

// 1. create two classes //
// 2. simple calculator //  -- // Takes input of 2 numbers using utility function //
// Performs add , sub , mul , div operations // // Displays the results using another function //
// 3. scientific calculator // -- // Takes input of 2 numbers using utility function //
// Performs any four scientific calculations  // // Displays the results using another function //

// Create another class which is inherited by these two classes with the name hybrid class //

// Our class 1 := //

class simplecaci
{
public:
    int a, b;
    void add(int s, int p)
    {
        int d;
        d = s + p;
        cout << "The add is :- " << d << endl;
    }
    void sub(int s, int p)
    {
        int d;
        d = s - p;
        cout << "The add is :- " << d << endl;
    }
    void mul(int s, int p)
    {
        int d;
        d = s * p;
        cout << "The add is :- " << d << endl;
    }
    void div(int s, int p)
    {
        int d;
        d = s / p;

        p;
        cout << "The add is :- " << d << endl;
    }
};

// Our class 2 :- //

class scientificcalci
{
public:
    int f, g;
    void sqroot(float b)
    {
        int e;
        e = sqrt(b);
        cout << "The square root of the number is :-" << e << endl;
    }

    void sqr(float b)
    {
        int f;
        f = pow(b, 2);
        cout << "The square of the number is :-" << f << endl;
    }

    void cube(float b)
    {
        int g;
        g = pow(b, 3);
        cout << "The cube of the number is :-" << g << endl;
    }

    void app(float b)
    {
        int h;
        h = ceil(b);
    }
};

// Our class 3 which will be a derived class from the two classes //

class hybridclaci : public simplecaci, scientificcalci
{
    void hysqr(void)
    {
        void sqr();
    }
    void add();
    void app();
    void cube();
};

int main()

{

    cout << "Welcmoe to the claculator app" << endl;
    simplecaci num;
    num.add(4, 5);
    num.mul(3, 4);
    scientificcalci no;
    no.cube(3);
    no.sqr(4);
}