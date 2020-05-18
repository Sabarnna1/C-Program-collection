#include<stdio.h>
void main()
{ char ch[100];
int c=0,i;
printf("Enter the string ");
gets(ch);
for(i=0;ch[i]!='\0';i++)
    c++;
printf("The total number of characters present in string is %d",c);
getchar();
}
