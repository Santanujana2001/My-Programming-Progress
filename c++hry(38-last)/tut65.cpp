// C++ Templates: Class Templates with multiple Parameters
#include<iostream>

using namespace std;
template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a,T2 b){
            data1 = a;
            data2 = b;
        }
    void display(){
        cout<<data1<<" "<<data2;
    }
};

int main(){

 myClass<double,char> app(5.4, 'c');
 app.display();

return 0;
}