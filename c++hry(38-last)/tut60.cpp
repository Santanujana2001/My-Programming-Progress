// File I/O in C++
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // string a = "ami valo chele";
    // // Opening files using constructor and writing it
    // ofstream b("my.txt"); // Write operation
    // b<<a;

    
    string a2;
    // Opening files using constructor and reading it
    ifstream x("my.txt"); // Read operation
    // x>>a2;// this will prevent you to see the full sectence
    getline(x, a2);  //this function helps to show all the words in that one line
    cout<<a2;

    return 0;
}






