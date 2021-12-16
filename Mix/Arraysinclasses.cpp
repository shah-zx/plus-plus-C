//Here we will learn about how can we use arrays in the classes //

// Here we have writte a program for a shop which gives us the item id and the price of the product we are purchasing //

// The item id and the price of the product is stored in the array //

#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)   // This function gives us the priviledge to add the item id and the price of an item //
{
    cout << "Enter the id of your item :-" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price of your item :-" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::displayPrice(void)   // This function gives us the item id and price we have mentioned in the above function //
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price item with id " << itemId[i] << "is " << itemPrice[i];
    }
}

int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}