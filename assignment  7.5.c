#include<stdio.h>
void main()
{ char ch[100];
int i,num=0,let=0,spl=0;
printf("Enter the string ");
gets(ch);
for(i=0;ch[i]!='\0';i++)
{if(ch[i]>='0'&&ch[i]<='9')
    num++;
else if(ch[i]>='a'&&ch[i]<='z'||ch[i]>='A'&&ch[i]<='Z')
        let++;
else
    spl++;}
printf("The total number of letters is %d",let);
printf("\nThe total number of numbers is %d",num);
printf("\nThe total number of special characters is %d",spl);
getchar();
}
