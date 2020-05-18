#include<stdio.h>
void main()
{int i,c=0,flag=0,c1=0;
char ch[100],revch[100];
printf("Enter the string ");
gets(ch);
for(i=0;ch[i]!='\0';i++)
c++;
for(i=c-1;i>=0;i--)
{revch[c1++]==ch[i];}
revch[i]='\0';
printf("%s",revch);
for(i=0;i<c;i++)
{if(ch[i]==revch[i])
   flag=0;
else
flag=1;}
if(flag==0)
    printf("The word is palindrome ");
else
    printf("The word is not palindrome ");
getchar();
}
