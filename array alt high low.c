#include<stdio.h>
int main()
{int arr[1000],i,j,n,temp,temp1; //only works when you give n as odd
printf("Enter the value of n ");
scanf("%d",&n);
printf("Enter the values ");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
     {if(i%2==0)
      { if(arr[j]>arr[j+1])
       {temp= arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;}}
       else
       {if(arr[j]<arr[j+1])
       {temp1= arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp1;}}}}
       printf( "The new array is \n");
       for(i=0;i<n;i++)
        printf(" %d",arr[i]);
getchar();
return 0;}
