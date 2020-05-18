#include<stdio.h>
int numtobin(int n)
{ if (n == 0)
        return 0;
    else
 return (n%2 + 10*numtobin(n/ 2));}
void main()
{int x;
printf("Enter the number ");
scanf("%d",&x);
printf("The binary equivalent of the number is %d",numtobin(x));
getchar();}
