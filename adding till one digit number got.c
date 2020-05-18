#include<stdio.h>
void main()
{
    int i,n,s=0;
    printf("Enter the number ");
    scanf("%d",&n);
       while(n>0||s>9)
    {if(n==0)
           {n=s;
            s=0;}
        s+=n%10;
        n=n/10;}
printf("The sum is %d",s);
getchar();
getchar();
getchar();
}
