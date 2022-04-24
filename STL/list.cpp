#include<iostream>
#include<list>
using namespace std;
 main(){
     list <int> a;
     list <int> b(a);

      for (int i = 0; i < 6; i++)
    {
     a.push_back(i);
    }
    a.push_front(95);// element will be inserted in first position 
    for (int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"elements in list a"<<endl;
    for (int i:a)
    {
        cout<<i<<" ";
    }
     cout<<endl;
    cout<<"total elements after erasing"<<endl;
    a.erase(a.begin());// erase(start index, end index) --> to erase element
    for (int i:a)
    {
        cout<<i<<" ";
    }
 }