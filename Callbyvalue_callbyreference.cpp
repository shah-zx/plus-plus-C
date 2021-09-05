// Here we will study about call by value and call by reference properties of the functions //

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int e = a + b;
    return e;
}
// This will not avtualy swap the values //
// Because the actual parameteres and being copied into the formal parameters //
// Once the parameters are copied into the function then the fumction can do anything with them , the values in the origianl code will not cahnge //
// This is the call by value example //
// void swap(int c , int d)
// {
//     int temp = c;
//     c = d;
//     d = temp;

// }

// This function will be actually changing the original numbers because the address is now being given to the function parameters //
// Once the address is given to the formal parameteres then it can do anything with the actual code //
// call by reference using pointers //

// void swap_pointer(int *c, int *d)
// {
//     int temp = *c;
//     *c = *d;
//     *d = temp;
// }

// call by refrence using reference variables //
// Reference variables are those variables whch point to same value //

// void swap_ref_var(int &y , int &z)
// {
    
//     int temp = y;
//     y = z;
//     z = temp;
// }


int main()

{
//     cout << "The sum is :- " << sum(4, 5) << endl;
//     // int f = 4, g = 5;
//     int i = 6 , j = 8;
//     // cout << "The values of c" << f << "and d" << g << " before swapping" << endl;
//     // swap_pointer(&f, &g);
//     cout << "The values of i" << i << "and j" << j << " after swapping" << endl;
//     swap_ref_var(i,j);
//     cout << "The values of i" << i << "and j" << j << " after swapping" << endl;
int s = 3;
int &k = s;
cout<<k;
    return 0;
}
