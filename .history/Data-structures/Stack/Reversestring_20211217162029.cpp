#include <iostream>
#include <stack>
using namespace std;

void Reverse(string s)
{
    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {
        string word = ""; // This will store the word in it
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    // cout << endl;
}

int main()
{
    string s = "Hey, how are you doing?";
    Reverse(s);
}
