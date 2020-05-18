#include<stdio.h>
int main()
{int i,T=1,j,n,arr[100],max;
printf("Enter a number");
scanf("%d",&n);
printf("\nEnter the numbers in array");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("\nThe array is ");
for(i=0;i<n;i++)
printf(" %d",arr[i]);
for(i=n-1;i>=0;i--)
{for(j=i;j<n;j++)
{
    max=-999;
    if(arr[j]>arr[i])
    {
        max=arr[i];
        T++;
        printf("  %d",max);
    }
}
}
printf("The number of test cases are %d",T);
getchar();
return 0;

}
