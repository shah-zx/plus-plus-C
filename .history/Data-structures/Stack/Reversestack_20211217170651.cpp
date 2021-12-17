#include <iostream>
#include <stack>
using namespace std;

void InsertAtBottom(stack<int> &st, int ele)
{
    if (st.empty())
    {
        st.push(ele);
        return;
    }

    int element = st.top();
    st.pop();
    InsertAtBottom(st, ele);
    st.push(ele);
}

void Reverse(stack<int> &st) 
{
    stack<int> st;
    int ele = st.top();
    Reverse(st);
    InsertAtBottom(st, ele);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    Reverse(st);
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }cout<<endl;
}