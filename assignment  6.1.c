#include<stdio.h>
#include<math.h>
float dist(float x,float y,float a,float b)
{ float area,mod;
mod=abs((x-a)*(x-a)+(y-b)*(y-b));
area=pow(mod,0.5);
    return area;}
int main()
{ float x1,y1,x2,y2,x3,y3,x,y,a,s,s1,s2,s3,a1;
printf("Enter the three coordinate of triangle in x,y form ");
scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
s=(dist(x1,y1,x2,y2)+dist(x2,y2,x3,y3)+dist(x3,y3,x1,y1))/2;
a=sqrt(s*(s-dist(x1,y1,x2,y2))*(s-dist(x2,y2,x3,y3))*(s-dist(x3,y3,x1,y1)));
printf("The area of the triangle is %f",a);
printf("\nEnter the point to check whether it is inside the triangle ");
scanf("%f%f",&x,&y);
s1=(dist(x,y,x2,y2)+dist(x2,y2,x3,y3)+dist(x3,y3,x,y))/2;
s2=(dist(x1,y1,x,y)+dist(x1,y1,x3,y3)+dist(x3,y3,x,y))/2;
s3=(dist(x1,y1,x2,y2)+dist(x2,y2,x,y)+dist(x,y,x1,y1))/2;
a1=sqrt(s1*(s1-dist(x,y,x2,y2))*(s1-dist(x2,y2,x3,y3))*(s1-dist(x3,y3,x,y)))+
sqrt(s2*(s2-dist(x3,y3,x,y))*(s2-dist(x1,y1,x,y))*(s2-dist(x3,y3,x1,y1)))
+sqrt(s3*(s3-dist(x,y,x2,y2))*(s3-dist(x1,y1,x,y))*(s3-dist(x1,y1,x2,y2)));
if(a==a1)
    printf(" 1 ");
else
    printf("0");
getchar();
return 0;}
