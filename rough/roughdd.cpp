#include <bits/stdc++.h>
using namespace std;
int highest(int i, int j, int k)
{
    if (i > j && i > k)
    {
        return i;
    }
    else if (j > k)
    {
        return j;
    }
    else
    {
        return k;
    }
}
int lowest(int x, int y, int z)
{

    int smallest = 99999;

    if (x <= smallest)
        smallest = x;
    if (y <= smallest)
        smallest = y;
    if (z <= smallest)
        smallest = z;

    return smallest;
}

int main()
{
    // your code goes here
    int x;
    cin >> x;
    while (x--)
    {
        int a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;
        int max = highest(p, q, r);
        int min = lowest(a, b, c);
        float total = (p + q + r) / 2;
        int got;
        if (a == b && b == c)
        {
            got = a + b + max;
            if (got = > total)
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }
        else if (a == min)
        {
            got = c + b + max;
            if (got = > total)
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }
        else if (a == min)
        {
            got = c + b + max;
            if (got = > total)
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
        }

        return 0;
    }
