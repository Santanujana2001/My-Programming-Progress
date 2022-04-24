#include<stdio.h>
int sec(int a[],int n){
 int f=9999,sec=9999,s=0,e=n;
if(n==0){return a[0];} 
while(s<=e){
    if(a[s]<=a[e]){
        if(a[s]<f){
            f=a[s];
        }
    }
    else{
        if(a[e]<f){
            f=a[e];
        }
    }
    s++;
    e--;
}
s=0;
e=n;
while(s<=e){
    if(a[s]==f){
        s++;
        continue;
    }
    else if(a[e]==f){
        e--;
        continue;
    }
    else if(a[s]<=a[e]){
        if(a[s]<sec && a[e]!= f){
            sec=a[s];
        }
    }
    else{
        if(a[e]<sec && a[e]!= f){
         sec=a[e];
        }
    }
    s++;
    e--;
}
return sec;
}
void main()
{
    int n;
    printf("Enter The Array Size\n");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter Array Element\n");
        scanf("%d",&a[i]);
    }
    printf("The Second Smallest Element Is The Array Is : %d\n",sec(a,n-1));

}