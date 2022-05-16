#include<math.h>
#include<stdio.h>
int main() {
double a,b,c,discriminant , root1,root2,root3, realpart,imagepart;
printf("enter coefficients a,b,c:");
scanf ("%lf %lf %lf",&a,&b,&c);
discriminant= b*b- 4*a*c;
if (discriminant>0) {
// root1= -b+sqrt(b*b-(4*a*c))/2*a;
root1= -b+sqrt(b*b-(4*a*c));
root1/=2*a;
root2= -b-sqrt(b*b-(4*a*c));
root2/=2*a;
printf("-b , sq , 2a is %lf %lf %lf\n",-b,sqrt(b*b-(4*a*c)),2*a);
printf("root1=%.2lf and root2= %.2lf " ,root1,root2);
}
else if (discriminant =0) {
root1=-b/2*a;
printf("root1=%.2lf and root2= %.2lf " ,root1 ,root2);

}
else {
realpart= -b+sqrt(-discriminant)/2*a;
imagepart= -b-sqrt(-discriminant)/2*a;
printf("root1=%2lf+%2.lfi and root2= %.lf -%.2fi",realpart,imagepart);
}
return 0;




}