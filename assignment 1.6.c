#include<stdio.h>
int main()
{int x,y,z;
printf("Enter the three numbers ");
scanf("%d%d%d",&x,&y,&z);
if(x>y&&x>z)
printf("\nThe largest number is %d",x);
if(y>x&&y>z)
printf("\nThe largest number is %d",y);
if(z>x&&z>y)
printf("\nThe largest number is %d",z);
if(x<y&&x<z)
printf("\nThe minimum number is %d",x);
if(y<x&&y<z)
printf("\nThe minimum number is %d",y);
if(z<x&&z<y)
printf("\nThe minimum number is %d",z);
getchar();
return 0;


}
