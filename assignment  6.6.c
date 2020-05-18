#include<stdio.h>
#include<string.h>
void main()
{char ch[1000];int i;
printf("Enter the string ");
gets(ch);
printf("The required string is ");
printf("\n %c",ch[0]);
for(i=0;i<strlen(ch);i++)
{if(ch[i]==32)
  printf("%c",ch[i+1]);}
getchar();
}
