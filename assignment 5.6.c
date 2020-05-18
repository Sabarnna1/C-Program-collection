#include<stdio.h>
int main()
{int x[10][10],i,j,x1[10][20],m,n;
      printf("Enter the dimension of the matrix");
      scanf("%d%d",&m,&n);
      printf("Enter the values in the matrix ");
     for(i=0;i<m;i++)
     {for(j=0;j<n;j++)
     scanf("%d",&x[i][j]);}
     printf("The  matrix is \n");
   for(i=0;i<m;i++)
     {for(j=0;j<n;j++)
     printf("  %d",x[i][j]);
     printf("\n");}
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
x1[j][i]=x[i][j];
}
printf("\nThe transpose of matrix is\n");
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
printf(" %d",x1[i][j]);
printf("\n");}
getchar();}
