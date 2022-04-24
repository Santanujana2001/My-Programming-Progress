#include<iostream>
#include<queue>
using namespace std;
main(){
    //max-->heap
    priority_queue <int> maxi;
    //min-->heap
    priority_queue <int,vector<int>,greater<int> > mini;
    maxi.push(5);
    maxi.push(54);
    maxi.push(15);
    maxi.push(3);
    maxi.push(9);
    int n = maxi.size();
    cout<<"elemnts of max array ";
    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(5);
    mini.push(54);
    mini.push(15);
    mini.push(3);
    mini.push(9);
    int m = mini.size();
    cout<<"elemnts of min array ";
    for (int i = 0; i < n; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }


}