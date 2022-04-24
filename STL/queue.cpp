#include<iostream>
#include<queue>
using namespace std;
main(){
    queue <string> a;
    a.push("sanu");
    a.push("shyam");
    a.push("rahim");
    cout<<"Top Element --> "<<a.front()<<endl;
    a.pop();
    cout<<"Top Element after popping --> "<<a.front()<<endl;
}