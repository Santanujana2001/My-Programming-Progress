#include<stdio.h>
void main(){
    int b,c,d;
    printf("Enter array size\n");
    scanf("%d",&b);
    int a[b];
    for (int i = 0; i < b; i++)
    {
        /* code */
        printf("enter element\n");
        scanf("%d",&a[i]);
    }
 printf("elements are\n");
    for (int i = 0; i < b; i++)
    {
        /* code */
       
        printf("%d\n",a[i]);
    }
}