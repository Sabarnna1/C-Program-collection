#include<stdio.h>
double fact(double n)
{int i,p=1;
for(i=1;i<=n;i++)
p=p*i;
return p;}
double power(double n,double r)
{int i,p=1.00;
for(i=1;i<=r;i++)
p*=n;
return p;}
int main()
{
    double arr[100],a1,a2;
    int ch,i,n;
    while (ch!=0)
   {printf("\nPress 1 to add");
    printf("\nPress 2 to subtract");
    printf("\nPress 3 to multiply");
    printf("\nPress 4 to divide");
    printf("\nPress 5 to calculate factorial");
    printf("\nPress 6 to calculate nCr");
    printf("\nPress 7 to calculate nPr");
    printf("\nPress 8 to calculate power of the number upto n times");
    printf("\nPress '0' to stop the process");
    printf("\nEnter your choice");
scanf("%d",&ch);

 if(ch==1) { printf ("\nEnter the total numbers you want to add");
            scanf("%lf",&n);
            double s=0.00;
            printf("\nEnter the numbers ");
            for(i=0;i<n;i++)
            {scanf("%lf",&arr[i]);
              s+=arr[i];
              printf("\nThe sum of the given numbers is %lf",s);}}

else if (ch==2) {printf("Enter the two numbers you want to subtract");
             scanf("%lf%lf",&a1,&a2);
            printf("\nThe subtraction of two numbers is %lf",a1-a2);   }

  else if (ch==3) { printf ("\nEnter the total numbers you want to multiply");
            scanf("%lf",&n);
            double p=1.00;
            printf("\nEnter the numbers ");
            for(i=0;i<n;i++)
            {scanf("%lf",&arr[i]);
              p*=arr[i];
              printf("\nThe product of the given numbers is %lf",p);}}

    else if (ch==4) {printf("Enter the two numbers you want to divide");
             scanf("%lf%lf",&a1,&a2);
            printf("\nThe subtraction of two numbers is %2lf",a1/a2);}

    else if (ch==5) {printf("Enter the number too calculate factorial ");
               scanf("%lf",&a1);
               printf("\nThe factorial of the number is %lf",fact(a1)); }

    else if (ch==6) {printf("Enter the value of n and r ");
              scanf("%lf%lf",&a1,&a2);
              printf("\nThe nCr value is %lf",fact(a1)/(fact(a2)*fact(a1-a2)));}

    else if (ch==7) {printf("Enter the value of n and r ");
              scanf("%lf%lf",&a1,&a2);
              printf("\nThe nCr value is %2lf",fact(a1)/fact(a1-a2));}

    else if (ch==8) {printf("Enter the number and its power ");
            scanf("%lf%lf",&a1,&a2);
            printf("\nThe number to its power %d", a2); printf("is %lf",power(a1,a2)); }

    else
    printf("Enter again ");

      }
getchar();
getchar();
getchar();
getchar();
return 0;
}
