#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the number you want to store\n");
    scanf("%d",&n);

    //        -: MALLOC :-

    // int *a=(int*)malloc(n*sizeof(int));
    // for (int i = 0;i<n;i++){
    //     printf("enter number\n");
    //     scanf("%d",a+i);
    // }

    //        -: CALLOC :- 

    // int *a=(int*)calloc(n,sizeof(int));
    // for (int i = 0;i<n;i++){
    //   printf("enter number\n");
    //   scanf("%d",a+i);
    // }

    //       -: REALLOC :-

    // int m;
    // printf("enter the new number\n");
    // scanf("%d",&m);
    // a=(int*)realloc(a,m+n*sizeof(int));
    //  for (int i = n;i<n+m;i++){
    //     printf("enter number\n");
    //     scanf("%d",a+i);
    // }

    
    // printf("numbers are\n");
    //  for (int i = 0;i<n+m;i++){
    //     printf("%d\n",*(a+i));
        
    // }

    //    -: FREE :-

    // free(a);
    // a=NULL;

    return 0;
}