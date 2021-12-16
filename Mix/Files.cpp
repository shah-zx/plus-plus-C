#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // connecting our file with the hout stream //

    ofstream hout("sample.txt");

    // Creating a new string and filling it with the string entered by the user //
    cout << "Enter your name :- ";

    string name;
    cin >> name;

    // Wrirting a string to the file //

    hout << "My name is" + name;
    // Link between the file and this file is disconnected //
    hout.close();

// Reading the file //
    ifstream hin("sample.txt");
    string content;
    hin>>content;
    cout<<"The content in this file is :- "<<content;
    return 0;
}