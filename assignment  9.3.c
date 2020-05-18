#include<stdio.h>
#include<conio.h>
void main()
{int i,j,k,n,ch;
    float A[20][20],c,x[10],sum=0.0;
    printf("\nEnter the elements of augmented matrix row-wise:\n\n");
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
        {printf("A[%d][%d] : ", i,j);
            scanf("%f",&A[i][j]);}}
printf("/nPress 1 to use Gauss-Elimination method ");
printf("/nPress 2 to use Jacobi's method ");
printf("/nPress 1 to use Gauss-Elimination with pivoting method ");
scanf("%d",&ch);
switch(ch)
{ case 1:
    for(i=1;i<3;i++)
    {for(j=1;j<3;j++)
        {if(j>i)
            {c=A[i][j]/A[j][j];
                for(k=0;k<3;k++)
                {A[i][k]=A[i][k]-c*A[j][k];}}}}
    x[3]=A[3][4]/A[n][n];
    for(i=n-1; i>=1; i--)
    {sum=0;
        for(j=i+1; j<=n; j++)
        {sum=sum+A[i][j]*x[j];}
        x[i]=(A[i][4]-sum)/A[i][i];}
    printf("\nThe solution is: \n");
    for(i=1; i<=n; i++)
    {printf("\nx%d=%f\t",i,x[i]);}
  case 2:


}
    }
