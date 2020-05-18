#include<stdio.h>
#include<stdlib.h>
struct node
{int info;
 struct node *ptr;
}*top,*top1,*temp;
int topelement();
int count = 0;
void create()
{top = NULL;}
void push(int data)
{if (top==NULL)
    {top=(struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->info = data;}
    else
    {temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;}
    count++;}
void pop()
{top1=top;
    if (top1 == NULL)
    {printf("\n Error : Trying to pop from empty stack");
        return;}
    else
    top1=top1->ptr;
    printf("\n Popped value : %d", top->info);
    free(top);
    top = top1;
    count--;}
void display()
{top1=top;
if (top1 == NULL)
 {printf("Stack is empty");
 return;}
 while (top1!=NULL)
    { printf(" %d",top1->info);
        top1=top1->ptr;}}
void main()
{int no, ch, e;
printf("\n Press 1 for Push");
printf("\n Press 2 for Pop");
printf("\n Press 3 for Display");
printf("\n Press 0 to stop the program");
create();
while (1)
{printf("\n Enter choice : ");
 scanf("%d",&ch);
     switch (ch)
        {case 1:
            printf("Enter the number");
            scanf("%d",&no);
            push(no);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
             exit(0);
        default :
            printf(" Wrong choice, Please enter correct choice  ");
            break;}}}


