#include <iostream>
using namespace std;

int isPower(int num)
{
    return (num && !(num & num - 1));
}
int main()
{

cout<<isPower(8);

}