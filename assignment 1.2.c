#include<stdio.h>
int main()
{float a,b,r;
printf("Enter the length and breadth of the rectangle ");
scanf("%f%f",&a,&b);
printf("Enter the radius of the circle ");
scanf("%f",&r);
printf("\nThe area of rectangle is %f",a*b);
printf("\nThe perimeter of rectangle is %f",2*a+b);
printf("\nThe area of circle is %f",3.142857*r*r);
printf("\nThe circumference of circle is %f",2*3.142857*r);
getchar();
return 0;
}
