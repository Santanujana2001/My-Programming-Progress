#include <iostream>
using namespace std;
main()
{
    int a[4] = {1, 4, 6, 7};
    int b[6] = {2, 3, 5, 8, 9, 11};
    int c[10];
    int d = sizeof(a) / sizeof(a[0]);
    int e = sizeof(b) / sizeof(b[0]);
    int j = 0;
    int i = 0;
    int k = 0;
    while (i < d && j < e)

    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < d)
    {
        c[k] = a[i];
        i++;
    }

    while (j < e)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    cout << "new elements" << endl;
    for (int k = 0; k < 10; k++)
    {

        cout << c[k] << " ";
    }
}