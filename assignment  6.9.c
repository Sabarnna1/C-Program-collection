#include<stdio.h>
#include<string.h>
void main()
{char ch[1000];int i,c=1;
printf("Enter the string ");
gets(ch);
printf("The required number of words is ");
for(i=0;i<strlen(ch);i++)
{if(ch[i]==32)
  c++;}
printf("%d",c);
getchar();
}

