#include<stdio.h>
#include<math.h>
int fact(int x)
{int i,p=1;
for(i=1;i<=x;i++)
p=p*i;
return p;}
void main()
{int n,i,s=0;
printf("Enter the value of n ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{s=s+fact(i);}
printf("The sum of the series is %d",s);
getchar();
}
