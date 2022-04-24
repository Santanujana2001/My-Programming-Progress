#include<stdio.h>

   extern int x;
   
    int x=303;

    int main(void)
    {

     
      int y=776;   //Works fine if above 2 declarations are removed!!

      printf("The value of x is %d,and of y is %d",x,y);

    }