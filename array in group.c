#include<stdio.h>
void k_is_equal(int arr[100],int k, int n)
{
int i,temp,left,right;
for(i=0;i<n;i+=k)
{ left=i;
right=i+k;
while(left<right)
{ temp=arr[left];
arr[left]=arr[right];
arr[right]=temp;
}
}
printf("The new array is ");
       for(i=0;i<n;i++)
       printf(" %d",arr[i]);
}
void main()
{
    int arr[100],n,k,i;
    printf("Enter the value of n ");
    scanf("%d",&n);
printf("Enter the value of the group ");
    scanf("%d",&k);
printf("\nEnter the values in loop ");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
k_is_equal(arr[100],k,n);
getchar();
}





