#include<iostream>
#include<deque>
using namespace std;
 main(){
     deque <int> a;
     for (int i = 0; i < 6; i++)
    {
     a.push_back(i);
    }
    a.push_front(95);// element will be inserted in first position 
    cout<<"total elements"<<endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
    a.pop_front();// first element will be removed after this
    a.pop_back();// last element will be removed after this
    cout<<"total elements after pop"<<endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a.at(i)<<" ";
    }
     cout<<"total elements after erasing"<<endl;a.erase(a.begin(),a.begin()+3);// erase(start index, end index) --> to erase element
      for (int i = 0; i < a.size(); i++)
    {
        cout<<a.at(i)<<" ";
    }

 }