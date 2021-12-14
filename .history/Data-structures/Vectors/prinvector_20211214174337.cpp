#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(8);
    v.push_back(11);
    v.push_back(1);


    // Now we will print the vectors //

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i];
    // }

    // second method :

    // vector<int>::iterator it; // This is the iterator
    // for (it = v.begin(); it < v.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // v.pop_back();  // For removing the element

    // for (auto element : v)
    // {
    //     cout << element << endl;
    // }

    vector<int> v2(3, 50);
    swap(v, v2);  // swapped the elements if v and v2

    for (auto element : v)
    {
        cout << element << endl;
    }

    sort(v.begin(), v.end());
}