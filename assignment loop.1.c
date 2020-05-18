#include<stdio.h>
void main()
{int i,n;
    printf("Enter the value of n ");
    scanf("%d",&n);
    printf("The numbers divisible by n are \n");
    for(i=1;i<=100;i++)
    {if(n%i==0)
    {printf("  %d",i);}
    }
    getchar();

}
