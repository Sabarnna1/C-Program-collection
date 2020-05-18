#include<stdio.h>
int main()
{ char s[100];
int i;
printf("Enter the string ");
gets(s);
for(i=0;i!='\0';i++)
{if(s[i-1]==' '&&s[i]=='t'&&s[i+1]=='h'&&s[i+2]=='e'&&s[i+3]==' ')
 { s[i]=' ';
 s[i+1]=' ';
 s[i+2]=' ';
 s[i+3]=' '; }
 }
 printf("The new string is %s",s);
getchar();
fflush(stdin);
return 0;}

