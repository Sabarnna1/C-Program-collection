#include<stdio.h>
void main()
{ int i,n;
printf("Enter the number ");
scanf("%d",&n);
for(i=1;i<=12;i++)
{
    printf(" %d",n);printf(" * %d",i);printf(" =%d",n*i);printf("\n");
}
getchar();
}
