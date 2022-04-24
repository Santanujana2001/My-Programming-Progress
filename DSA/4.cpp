#include<iostream>
using namespace std;
int main(){
int a,count=0;
cout<<"enter number "<<endl;
cin>>a;
 while(a){
  a=a>>1;
  
  count++;
}

cout<<count;
return 0;
}