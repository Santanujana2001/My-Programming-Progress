#include<iostream>
using namespace std;
int fib(int a){
    int b=a;
    if (a==1 )
    {
        return 0;
    }
    if (a==2 )
    {
        return 1;
    }

    return fib(a-1) + fib(a-2);
    
}
int fib1(int a){
int x=0,y=1,sum;
if (a==0)
{
    return 0;
}
if (a==1)
{
    return 1;
}
for (int i =2 ; i < a; i++)
{
    sum=x+y;
    x=y;
    y=sum;
}
return y;
}
main()
{
int a;
cout<<"enter the nth term you want the fibonacci ";
cin>>a;
// a=fib(a);
// cout<<" "<<a;
a=fib1(a);
cout<<" "<<a;
}