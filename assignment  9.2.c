#include<stdio.h>
#include<math.h>
float eq(float x,int c)
{return(x*tan(x)-c);}
void bisection(float *x, float llmt, float hlmt, int *temp)
{*x=(llmt+hlmt)/2;
    ++(*temp);
    printf("The value using Bisection method is %3d x = %7f\n", *temp, *x);}
void main()
{ int c,temp=0,max;
printf("Enter the value of constant c ");
scanf("%d",&c);
{float x,llmt,hlmt,x1,error;
    printf("\nGive the range of roots:");
    scanf("%f%f",&llmt,&hlmt);
    printf("Enter the allowed error ");
    scanf("%f",&error);
    bisection (&x,llmt,hlmt,&temp);
    do
    {if(eq(llmt,c)*eq(x,c)<0)
            llmt=x;
        else
            hlmt=x;
        bisection (&x1,llmt,hlmt,&temp);
        if (fabs(x1-x)<error)
        x=x1;}
    while (temp<3);}
printf("\nThe values of root using Newton-Raphson method is ");
{float error=0.0,x1=0.0,x=0.0,x0,h;
    printf("Enter the first approximation ,the max error\n");
    scanf("%lf%lf",&x0,&error);
    while(temp<3)
    { h=eq(x0,c)/(tan(x0)+x0*1/cos(x0)*1/cos(x0));
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
        float function=eq(x,c);
        printf("Value of F(root) is: %.12lf",function);}}
getchar();getchar();getchar();}

