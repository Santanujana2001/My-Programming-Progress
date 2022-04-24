#include<bits/stdc++.h>
using namespace std;
main()
{
    // vector<int> v{2,3,5,6,7};
    // for(auto i:v){
    //     cout<<i<<" ";
    // }
    int n;
    cout<<" enter the lenght \n";
    cin >>n;
    int *a=new int[n];
    for (int i=0;i<n;++i){
        cout<<"enter value \n";
        cin>>a[i];
    }
    sort(a,a+n);
    for (int i=0;i<n;++i){
        cout<<a[i]<<" ";
       
    }
}