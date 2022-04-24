#include<iostream>
#include<stack>
using namespace std;
main(){
    stack <string> a;
    a.push("sanu");
    a.push("shyam");
    a.push("rahim");
    cout<<"Top Element --> "<<a.top()<<endl;
    a.pop();
    cout<<"Top Element after popping --> "<<a.top()<<endl;
}