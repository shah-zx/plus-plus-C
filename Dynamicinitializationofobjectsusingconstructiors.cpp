#include <iostream>
using namespace std;

// Here we will learn how can we dynamically initalize the objects while making constructors //

class bankdeposit // This class is used for finding the simple interest //
{
    int prinicipal;
    int years;
    float interest;
    float returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r); // r can be a value like 0.4 etc //
    bankdeposit(int p, int y, int r);   // here r is integer /
    void show(void);
};

bankdeposit::bankdeposit(int p, int y, float r)
{
    prinicipal = p;
    years = y;
    interest = float(r) / 100;
    returnvalue = prinicipal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interest);
    }
}

bankdeposit::bankdeposit(int p, int y, int r)
{
    prinicipal = p;
    years = y;
    interest = r;
    returnvalue = prinicipal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interest);
    }
};

void bankdeposit::show()
{
    cout << endl
         << "Princoipal amount was " << prinicipal << endl
         << "Return value after " << years
         << "is " << returnvalue << endl;
}

int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;


    cout << "Enter the value of p , y , r" << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p , y , R" << endl;
    cin >> p >> y >> r;
    bd2 = bankdeposit(p, y, r);
    bd2.show();

    return 0;
}


// Here we saw that we made two constructors apart from the default constructor  , known as the paramiterized constructors //
// while we were pasing the values of arguments  , at runtime or compile time only the constructors decided that which object should they initialize 
// Here : object with float type r or int type r //