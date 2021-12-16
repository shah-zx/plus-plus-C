
// There are three types of loops in c++ :-
// For loop
// while loop
// Do while loop
// Block of state ments which are used to a work repeatedly //

#include <iostream>
using namespace std;

int main()
{

  int i = 0;

  // For loop in c++ //

  // for (int i = 0; i <= 100; i++)
  // {
  // cout<<i<<endl;
  // }
  // Infinite for loop //

  // for (int c = 31; c < 32; c++)
  // {
  //     cout<<c<<endl;

  // While loop //

  // while (i<=40)
  // {
  //     // printing  1 to 40 using while loop //
  //     cout<<i<<endl;
  //     i++;

  // Example of infinite while loop //

  //   while (1<2)
  //   {
  //       cout<<"me"<<endl;
  //   }

  // Do while loop //
  // do
  // {
  //     cout<<i<<endl;
  // } while (i<40);
  // The do while loop checks the condition once initially then executes the rest of the code //

  // Odd numbers starting from 1 to 10 //

  do
  {

    cout << ++i << endl;
    i++;

  } while (i != 10);
}
