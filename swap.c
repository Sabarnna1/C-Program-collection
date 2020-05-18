#include<stdio.h>
#include<string.h>
int main()
{char a[5],b[5],temp[5];
printf("Enter the first value ");
scanf("%s",&a);
printf("Enter the second value ");
scanf("%s",&b);
strcpy(temp,a);
strcpy(a,b);
strcpy(b,temp);
printf("The changed first value is %s",a);
printf("The changed second value is %s",b);
getchar();
return 0;
}
