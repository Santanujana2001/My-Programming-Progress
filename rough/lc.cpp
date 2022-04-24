#include<bits/stdc++.h>
using namespace std;
 string interpret(string command) {
        string s="";
        for(int i=0;i<command.length();i++){
            if(command[i-1]=='(' && command[i]==')'){
                s+='o';
            }
            else if(command[i]!='(' && command[i]!=')' ){
                s+=command[i];
            }
        }
        return s;
    }
int main(){
string f="G()(al)";
f=interpret(f);
cout<<f;
return 0;
}