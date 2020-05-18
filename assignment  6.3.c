#include<stdio.h>
int sum(int n)
{if (n==0)
return 0;
     return((n%10)+sum(n/10));}
void main()
{int x;
printf("Enter the number ");
scanf("%d",&x);
printf("The sum of digits is %d",sum(x));
getchar();
}
