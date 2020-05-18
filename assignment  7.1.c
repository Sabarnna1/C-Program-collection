#include<stdio.h>
void main()
{ char ch[100],ch1[100],ch2[200]; int i,c=0,c1=0;
printf("Enter the first string ");
scanf("%s",ch);
printf("Enter the second string ");
scanf("%s",ch1);
for(i=0;ch[i]!='\0';i++)
    c++;
for(i=0;ch1[i]!='\0';i++)
c1++;
for(i=0;ch[i]!='\0';i++)
{ch2[i]=ch[i];}
ch2[i]='\0';
for(i=0;ch1[i]!='\0';i++)
{ch2[c+i]=ch1[i];}
printf("\nThe new string is %s",ch2);
getchar();
}
