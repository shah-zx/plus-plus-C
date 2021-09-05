
// Here we will learn about files //
// File is a pattern which is stored in a disk //
// It contains info on the form of 0's and 1's //
// Files : collection of data //
// Stream - input stream and output stream //

#include<iostream>
#include<fstream>

// The useful classes for working with the files in cpp are :-
// 1. fstreambase
// 2.ifstrean --> derived from the fstreambase 
// 3.ofstream --> derived form the fstreambase

// In order to work with files //
// You will have to open it //
// Using the constructor and the member function open() of the class //

using namespace std;
int main()

{
// Opening the file using the constructor and writing it//
string st = "sayyed";
string st2;
ofstream o("sample.txt");  // For writing opeartion //
o<<st;  // Object name can be any //
// Opening the file using the constructor and raeding  it//
ifstream in("sample2.txt"); // Read operation
// in>>st2; // This is one method ,from this method only one word of the file will be printed into the console //
getline(in , st2);  // This is another method for getting the / reading the file but here we will be getting the whole line //
cout<<st2;
return 0;

}
