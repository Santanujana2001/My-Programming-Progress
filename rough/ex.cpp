#include<bits/stdc++.h>
using namespace std ;
int arr[] = {5,8,1,2,9};
void swap(int i,int j){
    int a=arr[i],b=arr[j];
    // a=a^b;
    // b=a^b;
    // a=a^b;
    // arr[i]=a;
    // arr[j]=b;
    arr[i]=arr[i]^arr[j];
    // cout<<arr[i];
    arr[j]=arr[i]^arr[j];
    // cout<<arr[j];
    arr[i]=arr[i]^arr[j];
    // cout<<arr[j];
    // int temp=arr[i];
    // arr[i]=arr[j];
    // arr[j]=temp;

}
int partition(int l,int h){
    int pivot=arr[l];
    int i=l;
    int j=h;
    while (i<j)
    {
        while (arr[i]<=pivot )
        {
            i++;
        }
        while ( arr[j]>pivot)
        {
            j--;
        }
        if (i<j)
        {
            swap(i,j);
        }
        
      
    }
      swap(j,l);
      return j;
    
}
void quick_sort(int l,int h){
    if (l<h)
    {
        int pivot=partition(l,h);
        quick_sort(l,pivot-1);
        quick_sort(pivot+1,h);
    }
   
    
}
int main(){
 
    int n = 5;
    
quick_sort(0,n-1);
for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

return 0;
}