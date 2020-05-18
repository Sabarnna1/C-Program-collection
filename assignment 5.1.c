#include<stdio.h>
void main()
{
    int i,arr[100],n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    printf("Enter the elements in array ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The array in reverse order is ");
    for(i=n-1;i>=0;i--)
        printf("  %d",arr[i]);
    getchar();
}
