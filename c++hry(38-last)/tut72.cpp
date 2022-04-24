// List In C++ STL

#include<iostream>
#include<list>
 
using namespace std;
 
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    
}
 
int main(){
    
    list<int> list1;  //empty list of 0 length
 
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(69);
    list1.push_back(47);
    list1.push_back(98);
    list1.push_back(34);
    list1.push_back(56);
 
    display(list1);
    list1.remove(69);//remove element  of the VALUE 
    cout<<endl;
    display(list1);
    cout<<endl;
    list1.pop_back();//romove element from end
    display(list1);
    cout<<endl;
    list1.pop_front(); //romove element from start
    display(list1);
    cout<<endl;
    list1.sort();    // sorting the list
    display(list1);
    cout<<endl; 
    list1.reverse();  // reversing the list
    display(list1);
    return 0;
}
