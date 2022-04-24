#include<stdio.h>

void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
}
int partition(int a[],int l,int u){
    int p = a[l];
    int s=l,e=u;
    while (s<e)
    {
        while(a[s]<=p){
          s++;
        }
         while(a[e]>p){
          e++;
        }
        if(s<e){
            swap(a[s],a[e]);
        }
    }
 swap(a[e],a[l]);
 return e;
    
}
void quicks(int a[],int ll,int uu){
    if(ll<uu){
        int k = partition( a,ll,uu);
        quicks(a,ll,k-1);
        quicks(a,k+1,uu);
    }
}

int main(){
    int arr[5]={4,1,5,2,3};
    printf("sidjskndsm");
    quicks(arr,0,4);
    
    for (int i = 0; i < 5; i++)
    {
        printf(" array after sorting \n");
        printf("%d ",arr[i]);
    }
    
    return 0;
}