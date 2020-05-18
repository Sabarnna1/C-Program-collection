#include<stdio.h>
int armstrong(int n)
{int x=n,t,s=0;
while(n>0)
{t=n%10;
s+=t*t*t;
n=n/10; }
if(x==s)
return 1;
}
int main()
{int x;
printf("Enter a number ");
scanf("%d",&x);
if(armstrong(x)==1)
printf("The number is armstrong");
else
printf("The number is not armstrong");
getchar();
return 0;}
