#include<stdio.h>
void main()
{float x;
printf("Enter the temperature in Fahrenheit ");
scanf("%f",&x);
printf("The temperature in centigrade is %f",(x-32.0)*5.0/9.0);
getchar();
}
