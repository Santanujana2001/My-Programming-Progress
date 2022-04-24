#include <iostream>
using namespace std;
main()
{
    int arr[6] = {0,5,0,6,0,7}; // 1,5,0,0
    int start = 0, end = 1;

    while (start < end && end<6)
    {
        
         if (arr[end] == 0)
        {
            end++;
        }
        else if (arr[start] != 0)
        {
            start++;
        }
        else if (arr[start] == 0 && end != 0)
        {
            swap(arr[start], arr[end]);
            start++;
            end++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}