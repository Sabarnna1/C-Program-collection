#include<stdio.h>
int palin(int n)
{int s=0,c=n;
while(n>0)
{ s=s*10+n%10;
n=n/10;
}
if(s==c)
    return 0;
else
    return 1;
}
void main()
{int x;
printf("Enter a number ");
scanf("%d",&x);
if(palin(x)==0)
printf("The number is palindrome ");
else
    printf("The number is not palindrome ");
getchar();

}
