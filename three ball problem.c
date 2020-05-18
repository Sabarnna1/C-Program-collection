#include<stdio.h>
int main()
{
int n,t[50],i,j,k,flag=0;
printf("Enter the value of n ");
scanf("%d",&n);
printf("Enter the numbers in the array ");
for(i=0;i<n;i++)
    scanf("%d",&t[i]);
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{for(k=0;k<n;k++)
{if(t[i]-t[j]==1&&t[i]-t[k]==2)
flag=1;
break;
}
}
}
if (flag==1)
    printf("YES");
else
    printf("NO");
getchar();
return 0;
}
