#include<stdio.h>
int main()
{int x[10][10],i,j,x1[10][20],x2[10][20],s=0,s1,k;
      printf("Enter the values in the first matrix ");
     for(i=0;i<3;i++)
     {for(j=0;j<3;j++)
     scanf("%d",&x[i][j]);}
     printf("Enter the values in the second matrix ");
     for(i=0;i<3;i++)
     {for(j=0;j<3;j++)
     scanf("%d",&x1[i][j]);}
     printf("The first matrix is \n");
   for(i=0;i<3;i++)
     {for(j=0;j<3;j++)
     printf("  %d",x[i][j]);
     printf("\n");}
printf("The second matrix is \n");
   for(i=0;i<3;i++)
     {for(j=0;j<3;j++)
     printf("  %d",x1[i][j]);
     printf("\n");}
     printf("\nPress 1 for sum of matrix ");
     printf("\nPress 2 for difference of matrix ");
     printf("\nPress 3 for multiplication of matrix ");
     scanf("%d",&s1);
     if(s1==1)
   printf("The sum of two matrix is \n");
{for(i=0;i<3;i++)
     {for(j=0;j<3;j++)
     printf("  %d",x[i][j]+x1[i][j]);
     printf("\n");}}
     if(s1==2)
     {printf("The difference of two matrix is \n");
for(i=0;i<3;i++)
     {for(j=0;j<3;j++)
     printf("  %d",x[i][j]-x1[i][j]);
     printf("\n");}}
     if(s1==3)
{for(k=0;k<3;k++)
    {for(i=0;i<3;i++)
     {for(j=0;j<3;j++)
      s+=x[k][j]*x1[j][i];
      x2[i][j]=s;
      }s=0;}
     printf("Matrix after multiplication is \n");
     for(i=0;i<3;i++)
     {for(j=0;j<3;j++)
      printf(" %d",x2[i][j]);
      printf("\n");
     }}
     else
        printf("\nWrong input ");
getchar();
return 0;}

