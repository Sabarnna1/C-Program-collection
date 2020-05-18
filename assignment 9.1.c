#include<stdio.h>
#include<math.h>
float eq(float x,int a,int b,int c,int d)
{return (a*x*x*x+b*x*x+c*x+d);}
void bisection(float *x, float llmt, float hlmt, int *temp)
{*x=(llmt+hlmt)/2;
    ++(*temp);
    printf("Iteration number is %3d x = %7f\n", *temp, *x);}
void regulafalsi(float *x, float x0, float x1, float fx0, float fx1, int *temp)
{*x=x0-((x1-x0)/(fx1-fx0))*fx0;
    ++(*temp);
    printf("Iteration no. %3d x = %7f \n",*temp, *x);}
void main ()
{ int a,b,c,d,ch;
int temp=0,max;
printf("Press 1 to calculate roots using Bisection method ");
printf("\nPress 2 to calculate roots using RegulaFalsi ");
printf("\nPress 3 to calculate roots using Newton-Raphson");
printf("\nEnter your choice ");
scanf("%d",&ch);
    printf("\nEnter the values a,b,c,d of equation ax3+bx2+cx+d\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
  switch (ch)
  { case 1: {float x,llmt,hlmt,x1,error;
    printf("Give the range of roots:");
    scanf("%f%f",&llmt,&hlmt);
    printf("Enter the maximum number of iterations and allowed error ");
    scanf("%d%f",&max,&error);
    bisection (&x,llmt,hlmt,&temp);
    do
    {if (eq(llmt,a,b,c,d)*eq(x,a,b,c,d) < 0)
            llmt=x;
        else
            hlmt=x;
        bisection (&x1,llmt,hlmt,&temp);
        if (fabs(x1-x)<error)
        printf("After %d iterations, root = %6.4f\n",temp,x1);
        x=x1;}
    while (temp<max);
    printf("The solution did not converge or iterations are not sufficient");}
    break;
    case 2:
    {float x0,x1,x2,x3,error;
    printf("\nEnter the values of x0, x1, allowed error and maximum iterations:\n");
    scanf("%f %f %f %d", &x0, &x1, &error, &max);
    regulafalsi(&x2,x0,x1,eq(x0,a,b,c,d),eq(x1,a,b,c,d),&temp);
    do
    {if(eq(x0,a,b,c,d)*eq(x2,a,b,c,d)<0)
            x1=x2;
        else
            x0=x2;
        regulafalsi(&x3,x0,x1,eq(x0,a,b,c,d),eq(x1,a,b,c,d),&temp);
        if (fabs(x3-x2)<error)
        printf("After %d iterations, root = %6f\n",temp,x3);
          x2=x3;}
    while (temp<max);
    printf("Solution does not converge or iterations not sufficient:\n");}
    break;
case 3:
    { float x0,h,error,x,x1;
    printf("Enter the first approximation ,the max error and the maximum number of iterations\n");
    scanf("%lf%lf%d",&x0,&error,&max);
    while(temp<=max)
    { h=eq(x0,a,b,c,d)/(3*a*x0*x0+2*b*x0+c);
        x1=x0-h;
        printf("The approximation's value after %d iteration is %.12lf\n",temp,x1);
        if(fabs(h)<error)
        { x=x1;
            break;}
        else
        x0=x1;
        temp++;}
    if(x==x1)
    { printf("The root is: %.12lf\n",x);
        float function=eq(x,a,b,c,d);
        printf("Value of F(root) is: %.12lf",function);}
    else
    printf("Solution does not converge or iterations not sufficient:");}
     break;
default:
    printf("The input value is wrong");}
    getchar();getchar();getchar();}
