// Function Objects (Functors) In C++ STL

#include<iostream>
#include<functional>
#include<algorithm>
 
using namespace std;
 
int main(){
 
    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
    int arr[] = {1, 73, 4, 2, 54, 7,4,9,656,88};
    sort(arr,arr+10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<endl;
    }
 
    return 0;
}
