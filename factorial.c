#include<stdio.h>
#include<math.h>
double fact(int x)
{int i,p=1;
for(i=1;i<=x;i++)
p=p*i;
return p;};
int main()
{int x,s=0,i;
printf("Enter the number");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
    s+=(double)pow(i,i)/fact(x);
}
printf("The factorial is %d",s);
 getchar ();
 getchar ();
 getchar ();
 return 0;}
