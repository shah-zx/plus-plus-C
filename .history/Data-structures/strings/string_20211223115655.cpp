#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // string s1;
    // // cin >> s1;    // For single charater
    // getline(cin, s1); // For taking inputs with spaces
    // cout << s1;
    // string s2 = "fam";
    // string s3 = "ily";
    // cout << endl;
    // s2.append(s3);
    // cout << s1 + s2 << endl; // this is how we can print out the added strings //
    // s2.clear();
    // cout << s2;
    // string s5 = "abc";
    // string s6 = "abc";
    // // cout << s5.compare(s6);
    // if (s5.compare(s6) == 0)
    // {
    //     cout<<"string are equal";
    // }

    string s1 = "shahnawaz";
    string s = "abc";
    // s.clear();
    // if (s1.empty())
    // {
    //     cout << "String is empty";
    // }
    // else
    // {
    //     cout << "Its not empty";
    // }
    string d4 = "nincompoop";
    d4.erase(3, 3);
    cout << d4 << endl;
    // Find function :`

    cout << d4.find("poop");

    // Insertion :

    d4.insert(2, "lol");
    cout << d4 << endl;

    cout << d4.substr(6, 4);

    // Conversion of string values to numeric :

    // string num = "786";
    // int x = stoi(num);
    // cout << x + 10;

    // Conversion of string values to numbers :

    int n = 123;
    cout << to_string(n) + "45";

    // Sorting the string values :
    string d = "uawbcjhsdgcuwcvjhsjciclv";
    cout<<d.sort();

}
