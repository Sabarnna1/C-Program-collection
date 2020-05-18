#include<stdio.h>
#include<string.h>
void sort(char ch[],char ch1[])
{int i,j,len=strlen(ch),len1=strlen(ch1);char temp;
    for (i=0;i<len-1; i++)
      {for (j=i+1;j<len;j++)
         {if (ch[i]>ch[j])
            {temp=ch[i];
            ch[i]=ch[j];
            ch[j] = temp;}}}
for (i=0;i<len1-1; i++)
      {for (j=i+1;j<len1;j++)
         {if(ch1[i]>ch1[j])
            {temp=ch1[i];
            ch1[i]=ch1[j];
            ch1[j] = temp;}}}
if(strcmp(ch,ch1)==0)
    printf("The strings are anagram");
else
    printf("The strings are not anagram");}
void main()
{ char ch[100],ch1[100];
printf("Enter the first string ");
gets(ch);
printf("Enter the second string ");
gets(ch1);
sort(ch,ch1);
getchar();}
