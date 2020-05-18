#include<stdio.h>
int main()
{ char ch[100];
int i;
printf("Enter the string ");
gets(ch);
for(i=0;ch[i]!='\0';i++)
{if(ch[i]>='a'&&ch[i]<='z')
    ch[i]=ch[i]-32;
 else if(ch[i]>='A'&&ch[i]<='Z')
    ch[i]=ch[i]+32;}
printf("The new string is %s",ch);
return 0;}
