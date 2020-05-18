#include<stdio.h>
int prime(int x)
{ int i,flag=0;
for(i=2;i<=x/2;i++)
{if(x%i==0)
{flag++;
break;}}
if(flag==0)
    return 1;
else
    return 0;}
void main()
{ int i;
  printf("All the prime number from 1 to 100  is  ");
  for(i=2;i<=100;i++)
  {if(prime(i)==1)
   printf("  %d",i);
  }
 getchar();
}
