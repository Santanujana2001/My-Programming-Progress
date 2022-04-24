#include<iostream>
#include<map>
using namespace std;
main(){
    map <int,string> a;
    a[2]="sanu";
    a[5]="farnando";
    a[7]="kartik";
    a[44]="jaggu";
    for(auto i:a){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"7 is present or not "<<a.count(7)<<endl;
}