#include<stdio.h>
void main()
{int i,n,s=0;
printf("Enter the value of n ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ s+=i*(i+1);}
printf("The sum of series is %d",s);
getchar();
}

