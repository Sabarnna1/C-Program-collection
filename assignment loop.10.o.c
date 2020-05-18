#include<stdio.h>
void main()
{ int i,arr[100],p=0,z=0,n=0;
printf("Enter the number  ");
for(i=0;i<10;i++)
scanf("%d",&arr[i]);
for(i=0;i<10;i++)
{if(arr[i]>0)
   p++;
if(arr[i]<0)
    n++;
if(arr[i]==0)
    z++;
}
printf("\nThe number of positive number is %d",p);
printf("\nThe number of negative number is %d",n);
printf("\nThe number of zero number is %d",z);
getchar();
}
