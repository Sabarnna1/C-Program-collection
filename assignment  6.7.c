#include<stdio.h>
void main()
{char ch[1000];int i;
printf("Enter the string ");
gets(ch);
printf("The required string is ");
for(i=0;i!='\0';i++)
{if(ch[i]>='a'&&ch[i]<='z')
{ch[i]=ch[i]-32;}}
printf("%s",ch);
getchar();}
