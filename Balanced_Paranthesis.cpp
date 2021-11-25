#include <iostream>
#include <stack>
using namespace std;
bool isBalancedExp(string s)
{
    stack<char> st;
    char x;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
            continue;
        }
        if (st.empty())
            return false;
        switch (s[i])
        {
        case ')':
            x = st.top();
            st.pop();
            if (x == '{' || x == '[')
                return false;
            break;
        case '}':
            x = st.top();
            st.pop();
            if (x == '(' || x == '[')
                return false;
            break;
        case ']':
            x = st.top();
            st.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
    return (st.empty());
}
int main()
{
    string s;
    cout << "Enter the expression: ";
    cin >> s;
    if (isBalancedExp(s))
        cout << "This is Balanced expression";
    else
        cout << "This is Not Balanced expression";
}