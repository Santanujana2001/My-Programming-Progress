
// Member Function Templates & Overloading Template Functions in C++ 

#include<iostream>
using namespace std;
// template <class T>
// class Harry
// {
// public:
//     T data;
//     Harry(T a)
//     {
//         data = a;
//     }
//     void display();
// };
 
// template <class T>
// void Harry<T> :: display(){
//     cout<<data;
void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
template <class x>
void run(x a){
    cout<<"number is "<<a<<endl;
}    

int main()
{
    // Harry<int> h(5.7);
    // cout << h.data << endl;
    // h.display();
    // func(5);
    run(5);
    return 0;
}
