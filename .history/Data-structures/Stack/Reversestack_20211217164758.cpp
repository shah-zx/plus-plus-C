#include <iostream>
#include <stack>
using namespace std;

void InsertAtBottom(stack<int> &st, int ele)
{
    int element = st.top();
    st.pop();
    InsertAtBottom(st, ele);
    st.push(ele);
}

void Reverse(stack<int>)
{
    stack<int> st;
    int ele = st.top();
    Reverse(st);
}

int main()
{


    
}