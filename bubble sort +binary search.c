#include<stdio.h>
int main()
{int arr[100],n,i,j,first,last,mid,temp=0,x;
printf("\nEnter the total numbers you want to enter ");
scanf("%d",&n);
printf("\nEnter the numbers in array");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n-1;i++)
{for(j=0;j<n-i-1;j++)
{if(arr[j]>arr[j+1])
{temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;}}}
printf("\nThe sorted array is ");
for(i=0;i<n;i++)
printf("  %d",arr[i]);
printf("\nEnter the number you want to search ");
scanf("%d",&x);
first=0;last=n-1;
mid=(first+last)/2;
while(first<=last)
{
    if(arr[mid]>=x)
        last=mid-1;
    if(arr[mid]<=x)
        first=mid+1;
        mid=(first+last)/2;

}
printf("\nThe number %d",x ); printf("is found at %d",mid+1);
getchar();
return 0;
}


