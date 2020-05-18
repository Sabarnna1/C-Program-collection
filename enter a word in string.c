#include<stdio.h>
#include<string.h>
int main()
{ int i,pos;
char arr[1000],arr1[100],t;
printf("Enter a line ");
gets(arr);
printf("Enter a word ");
gets(arr1);
printf("Enter the position for the word ");
scanf("%d",&pos);
for(i=0;i<=(strlen(arr)+strlen(arr1));i++)
{if(i==pos)
{t=arr[i];
arr[i]=arr1[i-pos];
arr[i+1]=t;
}
}
printf("The new line is\n  %s",arr);
 getchar();
 return 0;
}
