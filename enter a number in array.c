#include<stdio.h>
#include<conio.h>
int main()
{int arr[200],i,pos,x,n,temp,y;
printf("\nEnter the length of the array ");
scanf("%d",&n);
printf("\nEnter the number you want to enter and at what position ");
scanf("%d%d",&x,&pos);
printf("\nEnter the numbers into the array ");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
n++;
y=arr[pos];
for(i=pos+1;i<n;i++)
{arr[i+1]=arr[i];
}
    arr[pos]=x;
    arr[pos+1]=y;
printf("\nThe new array is ");
for(i=0;i<n;i++)
    printf(" %d",arr[i]);
getchar();
return 0;

}
