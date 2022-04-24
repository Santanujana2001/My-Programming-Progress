#include<iostream>
#include<vector>
using namespace std;
main()
{
    vector <int> a;
    a.push_back(5);
    a.push_back(4);
    a.push_back(8);
    a.push_back(1);
    a.push_back(9);
    int start = 0;
    int end = a.size() - 1;
    while(start <= end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
}