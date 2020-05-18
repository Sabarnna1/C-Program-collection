#include <stdio.h>
#include <stdlib.h>
struct Node
    {int data;
    struct Node* next; };
int c=0;
void reverse(struct Node** head)
{ struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next; }
        *head= prev; }
void printList(struct Node* head)
{ struct Node* temp = head;
    while (temp != NULL)
        {printf(" %d",temp->data);
        temp=temp->next;}}
void insert(Node** head, int new_data)
{ Node* new_node = new Node();
    new_node->data=new_data;
    new_node->next=(*head);
    *head=new_node;}
int main()
{ struct Node* head = NULL;
 int i,num,ch;
 printf("Press 1 to enter a node ");
 printf("Press 0 to stop the link list ");
 while(1)
 {printf("Enter the choice ");
 scanf("%d",&ch);
 switch(ch)
 { case 1:
     printf("Enter the number");
     scanf("%d",&num);
     insert(&head,num);
   case 0:
       printf("Exiting the node ");
       exit(0);
   default :
     printf("Input is wrong");}}
    printf("Given linked list\n");
    printList(head);
    reverse(&head);
    printf("\nThe linked list in reverse order \n");
    printList(head);
    getchar();}
