
// Here we will learn about the file functions //

#include <iostream>
#include <fstream>
using namespace std;
int main()

{
    // // Writing in the file //
    // ofstream out;
    // out.open("sample.txt");
    // out << "This is me";
    // out << "This is me";
    // out << "This is me";
    // out << "This is me";
    // out << "This is me";
    // out << "This is me";
    // Reading the file //
    ifstream in;
    string st;
    in.open("sample.txt");
    in >> st;
    cout << st;
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }

    return 0;
}
