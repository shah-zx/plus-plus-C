
// Here we will learn about the memory allocations //
// How to use arrays in class //

#include <iostream>
using namespace std;

class shop
{
    // By default private //
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void getItem(void);
    void setPrice(void);
    void dispPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter the id of your item no" << counter << endl;
    cin >> itemid[counter];
    cout << "Enter price of your item " << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop ::getItem(void)
{
    cout << "Enter the id of the id pf item" << endl;
    cin >> itemid[counter];
    cout << "Enter the price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::dispPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemid[i] << "is " << itemprice[i] << endl;
    }
}

int main()

{

    shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.dispPrice();
}