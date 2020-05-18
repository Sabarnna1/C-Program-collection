#include<stdio.h>
void main()
{int arr[100],n,i,j,arr1[100],c=0;
    printf("Enter the value of n ");
    scanf("%d",&n);
     printf("Enter the elements in array ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {for(j=i+1;j<n;j++)

            {if(arr[i]==arr[j])
                   {c++;
                       arr1[c]=arr[i];
                   } } }
    printf("The total number of duplicate elements is %d",c);
    printf("\nThe array of duplicate elements is ");
    for(i=c-1;i>=0;i--)
        printf("  %d",arr[i]);
    getchar();}
