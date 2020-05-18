#include<stdio.h>
int factsum(int n)
{int i,s=0;
    for(i=1;i<=n;i++)
    {if(n%i==0)
    {s+=i;}}
    return s;}
void main()
{ int s=0,i,n;
printf("Enter the value of n ");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   { s+=i*factsum(i);}
   printf("The sum of the series is %d",s);
   getchar();
}
