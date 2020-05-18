#include<stdio.h>
void main()
{char ch[1000];int i,n;
printf("Enter the string ");
gets(ch);
for(i=0;i!='/0';i++)
 {if(ch[i]>='0'&&ch[i]<='9')
 {n=n*10+ch[i] - '0';}
  else
    {break;}}
printf("The converted string to int is %d",n);
getchar();}

