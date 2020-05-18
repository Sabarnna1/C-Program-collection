#include<stdio.h>
void main()
{int n,d,t,t1;
printf("Enter the two numbers");
scanf("%d%d",&n,&d);
if(n>d)
{t=n;
t1=d;}
else
{t=d;
t1=n;}
printf(" %d",t);
printf(" shall be divided by %d",t1);
printf(" shall yield %d",(t-(t/t1)*t1));
printf("/%d",t1);
printf("\nThe fractional value is %f",(double)t/t1);
getchar();
getchar();
getchar();
getchar();
}
