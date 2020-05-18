#include<stdio.h>
fact(int x)
{int i,p=1;
for(i=1;i<=x;i++)
p=p*i;
return p;}
int main()
{int n; int s=0.0,i;
printf("Enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    s+=(double)fact(i)/n;
}
printf("The sum of series is : %d",s);
getchar();
}
