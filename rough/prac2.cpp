#include<iostream>
using namespace std;
int main(){
int n,item,loc,i;
cout<<"enter array size"<<endl;
cin>>n;
int a[n];
cout<<"enter  location"<<endl;
cin>>loc;
for (int i =0; i < n; i++)
{
    cout<<"enter element"<<endl;
    cin>>a[i];
}
item=a[loc];
for(i=loc;i<=n-1;i++)
{
    a[i]=a[i+1];
}
n=n-1;
cout<<"the deleted item is "<<item<<endl;
cout<<"elements"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<a[i]<<endl;
}
return 0;
}