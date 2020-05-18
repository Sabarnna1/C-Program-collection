#include<stdio.h>
void main()
{int x,y,z;
int avg;
printf("Enter three numbers ");
scanf("%d%d%d",&x,&y,&z);
avg=(x+y+z)/3;
printf("The average is %d",avg);
if(avg>x)
printf("\nThe number less than average is %d",x);
if(avg>y)
printf("\nThe number less than average is %d",y);
if(avg>z)
printf("\nThe number less than average is %d",z);
if(avg<x)
printf("\nThe number more than average is %d",x);
if(avg<y)
printf("\nThe number more than average is %d",y);
if(avg<z)
printf("\nThe number more than average is %d",z);
getchar();
}
