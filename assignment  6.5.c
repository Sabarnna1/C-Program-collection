#include<stdio.h>
void main()
{ char ch[100],temp,ch1[100];
int c=0,i,end;
printf("Enter the string ");
gets(ch);
for(i=0;ch[i]!='\0';i++)
    c++;
end=c - 1;
 for (i = 0;i < c;i++)
    {ch1[i] = ch[end];
      end--;}
 printf("The string in reverse order is ");
        printf("%s",ch1);
getchar();
}
