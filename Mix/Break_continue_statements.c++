#include<iostream>
using namespace std;



int main()
{
for (int i = 0; i < 4; i++)
{
    if (i==2)
    {
        // break; // This will break the whole code at 2 and will exit from the loop //
        continue; // This will not print 2 but will continue  printing by neglecting 2 //
    }
    cout<<i<<endl;

    
}
return 0;
}
