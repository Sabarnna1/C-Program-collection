#include<stdio.h>
void main()
{int i,j,arr[100],n,temp;
    printf("Enter the value of n ");
    scanf("%d",&n);
    printf("Enter the elements in array ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {for(j=0;j<n-i-1;j++)
    {if(arr[j]>arr[j+1])
    {temp=arr[j];
     arr[j]=arr[j+1];
     arr[j+1]=temp;}}}
    printf("The sorted array is ");
    for(i=0;i<n;i++)
        printf("  %d",arr[i]);
getchar();
}

