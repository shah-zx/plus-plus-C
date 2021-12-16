// Here we will study about if else control stuctures //
// Here we will be implementing the selection structure //

#include <iostream>
using namespace std;

int main()

{
    // Selection contorl structure if else statement //
    // int age;
    // for (int i = 0; i < 10; ++i)
    // {
    //     cout << i << endl;
    //     cout << " " << endl;
    // }

    for (int i = 10; i > 0; --i)
        cout << i << " ";

    // cout << "Enter your age :- " << endl;
    // cin >> age;
    // if ((age < 18) && (age>0))
    // {
    //     cout << "You cant come to my party" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "You are still a kid and you will get a kid pass" << endl;
    // }
    // else if (age <0)
    // {
    //     cout << "You are not born yet" << endl;
    // }
    // else
    // {
    //     cout << "You can come to the party" <<endl;
    // }

    // switch case //
    // cout << "Tell me your age :- " << endl;
    // cin >> age;
    // switch (age)
    // {
    // case 18:
    //     /* code */
    //     cout << "You are 18" << endl;
    //     cout<<"enjoy";
    //     break; // Break tells us that jump out from this block //

    // case 22:
    //     /* code */
    //     cout << "You are 22" << endl;
    //     break;
    // case 24:
    //     /* code */
    //     cout << "You are 24";
    //     break;
    // case 30:
    //     /* code */
    //     cout << "You are 30";
    //     break;

    // default:
    //     cout << "No special cases" << endl;
    //     break;
    // }
    // // After the execution of any of the bocl of switch the break will come here //
    // cout << "done with switch case";

        int i = 10;
    do
    {
            cout << ++i << endl;
    }
     while (i < 10);
}


}
