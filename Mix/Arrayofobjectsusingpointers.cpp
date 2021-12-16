#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "Code of the item is" << id << endl;
        cout << "Price of the item is" << price << endl;
    }
};

int main()
{
int size = 4;
// int *ptr = &size
shop *ptr = new shop [size];
int p;
float q;
int i;
shop *ptrtemp = ptr;
// We will use shop as data type //
// Suppose we have a general store and we have a veggies shop and a sports shop //
// All these arein a mall //
for ( i = 0; i < size; i++)
{
  cout<<"Enter id and price of item"<<endl;
  cin>>p>>q;
  ptr->setdata(p,q);
  ptr++;
 
}
for (  i = 0; i < size; i++)
{
 cout<<"Item number = "<<i+1<<endl;
 ptrtemp->getdata();
 ptrtemp++;

}
return 0;
}