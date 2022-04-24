#include<iostream>
#include<vector>
using namespace std;
main(){
    //dynamic array using STL
      vector<int> a;
    for (int i = 0; i < 6; i++)
    {
     a.push_back(i);
    cout<<" size "<<a.size()<<endl;
    cout<<" capacity "<< a.capacity()<<endl;
    }
    // size --> elements present in the array
    // capacity --> total space created by the array 
    // vector can increase and decrease its size capacity autometic 
    cout<<" total elements before pop back "<<endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
    a.pop_back(); // last element will be removed after this
    a.pop_back();
    cout<<"total elements after pop back "<<endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
     cout<<"total elements after erasing "<<endl;
     a.erase(a.begin(),a.begin()+3);// erase(start index, end index) --> to erase element
      for (int i = 0; i < a.size(); i++)
    {
        cout<<a.at(i)<<" ";
    }
}