#include<stdio.h>
#include<string.h>
void dict(char ch[])
{int i,j,len=strlen(ch);char temp;
    for (i=0;i<len-1; i++)
      {for (j=i+1;j<len;j++)
         {if (ch[i]>ch[j])
            {temp=ch[i];
            ch[i]=ch[j];
            ch[j] = temp;}}}
printf("The word in lexicography is %s",ch);}
void main()
{ char ch[100],ch1[100];
printf("Enter the word ");
gets(ch);
dict(ch);
getchar();}

