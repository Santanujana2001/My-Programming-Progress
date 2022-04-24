#include <bits/stdc++.h>
using namespace std;
void pcheck(string n)
{
    int count = 0;
    int count2 = 0;
    int count3 = 0;
    int i;
    for (i = 0; i < n.length(); i++)
    {
        // cout << n[i];
        if (n[i] == '[')
        {
            count3++;
        }
        else if (n[i] == ']')
        {
            if (count3 == 0)
            {
                cout << 1 << endl;
                cout << "Parentheses Is Not Matching" << endl;
                break;
            }
            count3--;
        }
        if (n[i] == '{')
        {
            count2++;
        }
        else if (n[i] == '}')
        {
            if (count2 == 0)
            {
                cout << 1 << endl;
                cout << "Parentheses Is Not Matching" << endl;
                break;
            }
            count2--;
        }
        if (n[i] == '(')
        {
            count++;
        }
        else if (n[i] == ')')
        {
            if (count == 0)
            {
                cout << 1 << endl;
                cout << "Parentheses Is Not Matching" << endl;
                break;
            }
            count--;
        }
    }
    if (i == n.length())
    {
        if (count == 0 && count2 == 0 && count3 == 0)
        {
            cout << "Parentheses is Matching" << endl;
        }
        else
        {
            cout << 2 << endl;
            cout << "Parentheses Is Not Matching" << endl;
        }
    }
}
int main()
{
    string a = "((()()))(){}[]{}hjuh([{}])";
    pcheck(a);
    return 0;
}