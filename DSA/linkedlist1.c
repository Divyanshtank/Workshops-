//insertion in linked list

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;//self referential pointer
};
struct node *head=NULL;

struct node* create()
{
  struct node *temp;
 temp=(struct node*) malloc(sizeof(struct node));
 printf("enter the data\n");
 scanf("%d",&temp->data);
 temp->next=NULL;
 return temp;
}
void insert_at_first()
{
  struct node *temp;
 temp = create();
 if (head==NULL)
 {
    head=temp;
 }
 else
 {
    temp->next=head;
    head=temp;
 }
}
 void display()
     {
       if(head==NULL)
       {
        printf("link list is empty!!!");
       }
       else
       {
        struct node *temp;
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
       }
      }
 

void main()
{
    int choice;
    while(1)
    {
	
    printf("press 1 perform insertion at first node\n");
      printf("press 2 perform  display linklist\n");
      printf("enter your choice");
      scanf("%d",&choice);
    
	   switch(choice)
      {
        case 1:
               insert_at_first();
               break;
        case 2:
               display();       
               
    }
}
}
