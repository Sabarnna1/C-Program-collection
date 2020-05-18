#include <stdio.h>
#include <string.h>
int main()
{  	char ch[100];
  	int i,j,c=0,s,e;
    printf("Enter a string");
  	gets(ch);
  	for(i=0;ch[i]!='\0';i++)
        c++;
  	e=c-1;
  	printf("\nThe reverse word of strings is ");
  	for(i=c-1;i>=0;i--)
	{if(ch[i]==' '||i==0)
		{if(i==0)
			{s=0;}
			else
			{s=i+1;}
			for(j=s;j<=e;j++)
			{printf("%c",ch[j]);}
			e=i-1;
			printf(" ");}}
			return 0;}

