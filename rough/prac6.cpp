#include <bits/stdc++.h>
#include <cmath>
using namespace std;
class nclac
{
    int a;
    float b;
    

public:
    void in1()
    {
        cout << "enter first number " << endl;
        cin >> a;
        cout << "enter second number " << endl;
        cin >> b;
    }
    void dis1()
    {
        cout << "sum is=" << a + b << endl;
        cout << "substraction is=" << a - b << endl;
        cout << "multiplication is=" << a * b << endl;
        cout << "division is=" << a / b << endl;
    }
};
class scalc
{
    int c, d;

public:
    void in2()
    {
        cout << "enter first number " << endl;
        cin >> c;
        cout << "enter second number " << endl;
        cin >> d;
    }
    void dis2()
    {
        cout << "sinA-sinB = " << sin(c)-sin(d) << endl;
        cout << "cosA-cosB = " << cos(c)-cos(d) << endl;
        cout << "tanA-tanB = " << tan(c)-tan(d) << endl;
        cout << "cotA-cotB = " << atan(c)-atan(d)<< endl;
    }
};
class hybridclac : public nclac, public scalc
{
};

int main()
{
    hybridclac hype;
    int a;
    while(true){
    cout<<"enter 1 to try simple calculator "<<endl<<"enter 2 to try simple calculator "<<endl;
    cout<<"enter 3 to exit"<<endl;
    cin >> a;
    switch (a)
    {
    case 1:
    hype.in1();
    hype.dis1();
        break;
     case 2:
    hype.in2();
    hype.dis2();
        break;
        case 3:
        exit(0);        
    default:
    cout<<"invalid number";
        break;
    }

    }
    
    return 0;
}