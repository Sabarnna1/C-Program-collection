#include<stdio.h>
void main()
{
    int arr[100],i,n,s=99999,l=0;
    printf("Enter the value of n ");
    scanf("%d",&n);
     printf("Enter the elements in array ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    { if(s>arr[i])
    { s=arr[i];}
     if(l<arr[i])
    { l=arr[i];}
    }
    printf("The range is %d",l-s);
 getchar();

}
