#include<stdio.h>
void main()
{int x,t,t1;
printf("Enter the amount ");
scanf("%d",&x);
printf("The number of 100 currency note is %d",x/100);
t=x-(x/100)*100;
printf("\nThe number of 50 currency note is %d",t/50);
t1=t-(t/50)*50;
printf("\nThe number of 50 currency note is %d",t1/10);
getchar();
}
