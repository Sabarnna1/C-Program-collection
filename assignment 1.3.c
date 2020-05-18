#include<stdio.h>
void main()
{int x,s=0;
printf("Enter a number ");
scanf("%d",&x);
s=x/100+x/10-(x/100)*10+x%10;
printf("The sum of digits is %d",s);
getchar();
}
