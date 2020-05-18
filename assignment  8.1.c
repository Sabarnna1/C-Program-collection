#include<stdio.h>
struct Student
{ int Roll;
  char Name[50];
  char Department[30];
  char Course[30];
  int YearofJ;
} s[100];
void year(struct Student s[],int n,int year)
{ int i;
printf("The name of students is ");
for(i=0;i<n;i++)
{ if(s[i].YearofJ==year)
{printf(" %d",i+1);
printf("\n %s",s[i].Name);}}}
void details( struct Student s[],int n, int rollnum)
{ int i;
for(i=0;i<n;i++)
{if(s[i].Roll==rollnum)
{printf("The name of student is %s",s[i].Name);
 printf("\nThe department of student is %s",s[i].Department);
printf("\nThe course of student is %s",s[i].Course);
printf("\nThe year of joining of student is %s",s[i].YearofJ);}}}
void main()
{ int n,i,froll,yoj;
printf("Enter the total number of students you want to enter ");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("\nEnter the roll number of student ");
  scanf("%d",&s[i].Roll);
printf("\nEnter the name of the student ");
  scanf("%s",&s[i].Name);
printf("\nEnter the department of the student ");
  scanf("%s",&s[i].Department);
printf("\nEnter the course of the student ");
  scanf("%s",&s[i].Course);
printf("\nEnter the year of joining  of student ");
  scanf("%d",&s[i].YearofJ);}
printf("\nEnter the year of joining of the students to get their names ");
scanf("%d",&yoj);
year(s,n,yoj);
printf("\nEnter the roll number you want to find details of the student ");
scanf("%d",&froll);
details(s,n,froll);}
