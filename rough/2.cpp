#include <iostream>
using namespace std;
int lengthOfLastWord(string s)
{
    int c = 0;
    if (s[s.length() - 1] != ' ')
    {
        for (int i = s.length() - 1; s[i] != ' '; i--)
        {
            c++;
            // cout<<c<<endl;
        }
    }
    else
    {
        int b = s.length() - 1;
        for (int i = s.length() - 1; s[i] == ' '; i--)
        {
            b--;
        }
        b--;
        c = b;
        for (int i = c; s[i] != ' '; i--)
        {
            c--;
        }
        c = b - c+1;
    }
    return c;
}
int main()
{
    string s = "hello         Worldg     ";
    cout << lengthOfLastWord(s);
    return 0;
}