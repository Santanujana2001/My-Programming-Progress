#include<iostream>
#include<set>
using namespace std;
main(){
    set <int> a;
    a.insert(1);
    a.insert(1);
    a.insert(5);
    a.insert(5);
    a.insert(4);
    a.insert(4);
    a.insert(4);
    //set will recognize the elemnts as single time which are occured more than once
    for (int i:a){
        cout<<i<<endl;
    }
cout<<"5 is present or not --> "<<a.count(5)<<endl;
}