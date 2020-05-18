#include<stdio.h>
int main()
{int a,b,c;
float avg;
printf("Enter the three numbers ");
scanf("%d%d%d",&a,&b,&c);
avg=(float)((a+b+c)/3);
if(avg<a)
    printf("\nThe number greater than average is %d",a);
if(avg<b)
    printf("\nThe number greater than average is %d",b);
if(avg<c)
    printf("\nThe number greater than average is %d",c);
if(avg>a)
    printf("\nThe number smaller than average is %d",a);
if(avg>b)
    printf("\nThe number smaller than average is %d",b);
if(avg>c)
    printf("\nThe number smaller than average is %d",c);
getchar();
}
