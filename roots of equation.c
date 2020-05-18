#include<stdio.h>
#include<math.h>
int main()
{double a,b,c,d;
printf("Enter the coefficient of the quadratic equation ax^2+bx+c ");
scanf("%2lf%2lf%2lf",&a,&b,&c);
d=b*b-4*a*c;
if(sqrt(d)<0)
    printf("The roots are imaginary ");
else
{printf("\nThe first root of the equation is %2lf",(-b+sqrt(d))/2*a);
printf("\nThe second root of the equation is %2lf",(-b-sqrt(d))/2*a);}
getchar();
return 0;}
