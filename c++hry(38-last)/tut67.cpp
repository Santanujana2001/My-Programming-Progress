// C++ Function Templates & Function Templates with Parameters 
#include<iostream>
using namespace std;
template <class T>
void swa(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b<<endl;   
}

int main(){
int a=4;
int b=5;
swa(a,b);


return 0;
}