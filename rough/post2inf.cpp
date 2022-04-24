#include <bits/stdc++.h>
using namespace std;

int main()
{
    string infix = "x+y*z-r";
    string postfix;
    vector<string> stack;

    int i = -1, j = -1;
    int temp;
    int opt = -1;
    cout << infix;
    int cnt = infix.length();
    while (cnt--)
    {
        cout << "N"
             << " ";
        ++i;
        if (infix[i] == '-' || infix[i] == '+' || infix[i] == '*' || infix[i] == '/')
        {
            if (infix[i] == '-' || infix[i] == '+')
            {
                if (stack.empty())
                {
                    ++opt;
                    stack.push_back(infix[i]);
                }
                else
                {
                    int limit = stack.length();
                    while (limit--)
                    {
                        postfix[++j] = stack.back();
                        stack.pop_back();
                    }

                    stack.push_back(infix[i]);
                }
            }
            else
            // infix[i] == '*' || infix[i] == '/'
            {
                if (stack.empty())
                {
                    ++opt;
                    stack.push_back(infix[i]);
                }
                else
                {
                    if (stack.back() == '*' || stack.back() == '/')
                    {
                        while (stack.back() != '-' || stack.back() != '+')
                        {

                            postfix[++j] = stack.back();
                            stack.pop_back();
                        }
                        ++opt;
                        stack.push_back(infix[i]);
                    }
                }
                else
                {

                    postfix[++j] = infix[i];
                }
            }

            return 0;
        }
    }
    if (stack.empty())
    {
        cout << postfix;
    }
    else
    {
        while (!(stack.empty))
        {
            postfix[++j] = postfix[++j] = stack.back();
            stack.pop_back();
        }
    }
}