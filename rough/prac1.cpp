// insertion

#include<iostream>
using namespace std;
int main(){
int n,item,loc,i;
cout<<"enter array size"<<endl;
cin>>n;
int a[n];
cout<<"enter item value and location"<<endl;
cin>>item>>loc;
for (int i = 0; i < n; i++)
{
    cout<<"enter element"<<endl;
    cin>>a[i];
}

for(i=n-1;i>=loc;i--)
{
    a[i+1]=a[i];
}
a[loc]=item;
n=n+1;
cout<<"elements"<<endl;
for (int i = 0; i < n; i++)
{
    cout<<a[i]<<endl;
}

return 0;
}