#include <bits/stdc++.h>
using namespace std;
int minAddToMakeValid(string s)
{
    int t = 0;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        cout << i << endl;
        char c = s[i];
        if (c == '(')
        {
            st.push(c);
        }
        else
        {
            if (!s.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                cout << "hi";
                st.push(c);
            }
        }
    }
    t = st.size();
    return t;
}
int main()
{
    string d = ")((";
    cout << minAddToMakeValid(d);
}