#include<stdio.h>
int main()
{
    int x[10][10],i,j,x1[10][20],x2[10][20],m,n,m1,n1,s=0,k;
    printf("Enter the number of rows and column for first matrix ");
    scanf("%d%d",&m,&n);
printf("Enter the number of rows and column for second matrix ");
    scanf("%d%d",&m1,&n1);
    if(n!=m1)
    {printf("Wrong input ");}
    else
    {  printf("Enter the values in the first matrix ");
     for(i=0;i<m;i++)
     {for(j=0;j<n;j++)
     scanf("%d",&x[i][j]);}
     printf("Enter the values in the second matrix ");
     for(i=0;i<m1;i++)
     {for(j=0;j<n1;j++)
     scanf("%d",&x1[i][j]);}
   printf("The first matrix is \n");
   for(i=0;i<m;i++)
     {for(j=0;j<n;j++)
     printf("  %d",x[i][j]);
     printf("\n");}
printf("The second matrix is \n");
   for(i=0;i<m1;i++)
     {for(j=0;j<n1;j++)
     printf("  %d",x1[i][j]);
     printf("\n");}
     for(k=0;k<m1;k++)
    {for(i=0;i<m;i++)
     {for(j=0;j<n1;j++)
      s+=x[k][j]*x1[j][i];
      x2[i][j]=s;
      }s=0;}
     printf("Matrix after multiplication is \n");
     for(i=0;i<m;i++)
     {for(j=0;j<n1;j++)
      printf(" %d",x2[i][j]);

      printf("\n");
     }
}
getchar();
return 0;
}
