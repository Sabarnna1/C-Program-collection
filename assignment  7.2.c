#include<stdio.h>
int main()
{ char ch[100],t;
int c=0,i;
printf("Enter the string ");
gets(ch);
printf("Enter the character to find frequency ");
scanf("%c",&t);
for(i=0;ch[i]!='\0';i++)
    {if(t==ch[i])
    c++;}
printf("The frequency of letter %c",t);
printf(" is %d",c);
return 0;}
