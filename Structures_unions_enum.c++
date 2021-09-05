
// Here we will study about structures //
// Structures are user defined data type which are having different data types in them //
// Unions //
// They are like structurtes omly // // But they are more memory efficient //
// Enum //
// These are the derived data type //

#include <iostream>
using namespace std;

struct employee
{
    int id;
    char favorite;
    float salary;
};

// Using  the typedef function //

typedef struct school
{
    int students;
    char name;
    int fees;
} sc;
// Now using typedef we can make the struct school as sc // // actaully we have made the struct school as sc //

// Union //

union money
{
    int dollar;
    float pound;
    double long euro;
};
// Union has a feature which is thst it does not allocate the memory to each element of the union rather it alloactes the highest amount
// of memory an element is having //

int main()

{

    // Implementing enum which is also a data type //

    enum Meal
    {
        braekfast,
        lunch,
        dinner
    };
    cout << braekfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    
    Meal m = lunch;
    cout<<m<<endl;
    

    // struct employee shanu;
    // sc kv; // Using the typedef function //
    // kv.fees = 3600;
    // kv.name = shahnawaz;
    // kv.students = 3456;
    // // Above we made an object of struct employee named shanu //
    // We can make as many objects as we want //

    // // Implementing union //
    // union money m1;
    // m1.dollar = 67;
    // cout << "Union example" << m1.dollar << endl;

    // shanu.id = 1;
    // shanu.salary = 345000;
    // shanu.favorite = 'a';
    // cout << shanu.salary << endl;
    // cout << shanu.favorite << endl;
    // cout << shanu.id << endl;

    // cout << kv.fees << endl;
    // cout << kv.name<< endl;
    // cout << kv.students<< endl;

    return 0;
}